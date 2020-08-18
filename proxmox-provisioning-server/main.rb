# web
require 'sinatra'
require "sinatra/namespace"

# tracing
require 'opentracing'
require 'jaeger/client'
require 'rack/tracer'

# proxmox
# https://github.com/fog/fog-proxmox
require 'fog/proxmox'

# https://docs.ruby-lang.org/en/2.1.0/Socket.html
require 'socket'

require 'yaml'

require 'json'

set :show_exceptions, true

# vars
# for proxmox api
$config_file = "/root/proxmox-config.yaml"
$pxm_master = Socket.gethostname

# for generating proxmox containers
$pxm_hostname_prefix = "oc-"
# increase disk for OS space
$pxm_disk_size_increase = 5
# basic template
$pxm_ostemplate = "local:vztmpl/centos-7-default_20190926_amd64.tar.xz"

# tracing init
OpenTracing.global_tracer = Jaeger::Client.build(service_name: 'proxmox-provisioning-server')

use Rack::Tracer

# Models
class Proxmox
  def initialize(config_file,pxm_master)
    config_file = config_file
    pxm_master = pxm_master
    @proxmox_node

    connect(config_file,pxm_master)
  end

  def get_containers()
    puts "loading existing containers..."

    if @proxmox_node.nil?
      msg = " Error: connect failed!"
      puts msg
      return false, msg.to_s
    end

    begin
      containers = @proxmox_node.containers.all
      return true, containers
    rescue Exception => msg
      puts " Error: " + msg.to_s
      return false, msg.to_s
    end
  end

  def create_container(c_data)
    output_data = {}

    puts "creating container..."
    c = @proxmox_node.containers.create({
                                            vmid:       c_data['ctid'],
                                            storage:    'local',
                                            ostemplate: c_data['ostemplate'],
                                            password:   c_data['password'],
                                            memory:     c_data['ram'].to_s,
                                            swap:       c_data['swap'],
                                            hostname:   c_data['hostname'],
                                            rootfs:     'local:'+c_data['disk'].to_s,
                                            onboot:     '1',
                                        })

    output_data['container_create_status'] = c.to_s

    if c
      puts 'container successfully created (ret_val: ' + c.to_s + ')'
      #container_new.reload
    else
      puts 'container creation failed (ret_val: ' + c.to_s + ')'
      return false, output_data
    end

    puts "get container context..."
    c = @proxmox_node.containers.get c_data['ctid']

    puts "add network card..."
    ct_update_rs = c.update({ net0: 'bridge=vmbr0,name=eth0,ip=' + c_data['ipaddress'].to_s + ',gw=192.168.222.1'})

    #TODO
    # ct_update_rs is empty
    # c containts array with container parameters
    #puts "ct update: #{c.inspect}"
    output_data['container_update_status'] = ct_update_rs.to_s

    if c
      puts 'container successfully update (ret_val: ' + ct_update_rs.to_s + ')'
      #container_new.reload
    else
      puts 'container update failed (ret_val: ' + ct_update_rs.to_s + ')'
      return false, output_data
    end

    # start container
    c.action('start')
    c.wait_for { ready? }
    status = c.ready?

    output_data['container_start_status'] = status.to_s

    if status
      puts "container successfully started (ct status: " + status.to_s + ")"
    else
      puts "container starting failed (ct status: " + status.to_s + ")"
      return false, output_data
    end

    return true, output_data
  end

  private

  def connect(config_file,pxm_master)
    config_file = config_file
    pxm_master = pxm_master

    #load proxmox login
    cnf = YAML::load(
        File.open(config_file)
    )

    cnf_login_user = cnf[0]['login'][0]['user'].to_s
    cnf_login_password = cnf[0]['login'][1]['password'].to_s

    puts "Loaded from config: "
    puts "login user: " + cnf_login_user
    #puts "login password: " + cnf_login_password

    puts "connect to proxmox server.."

    compute = Fog::Compute::Proxmox.new(
        pve_username: cnf_login_user,
        pve_password: cnf_login_password,
        pve_url: 'https://127.0.0.1:8006/api2/json',
        connection_options: {
            ssl_verify_peer: false,
        }
    )

    begin
      @proxmox_node = compute.nodes.find_by_id pxm_master
    rescue Exception => msg
      puts "Error (proxmox): " + msg.to_s
    end

    #puts " Node stats: " + node.statistics.to_s
  end
end

class Container
  def initialize()
  end

  def get_parsed()
    begin
      status, all = get_all()
      if !status
        return false, "container get_all failed!"
      else
        if !all.nil?
          containers = {}
          all.each do |c|
            #printf "\tID: %-10s Hostname:     %s\n", c.vmid, c.config.hostname
            containers[c.vmid] = c.config.hostname
          end
          return true, containers
        else
          return true, {}
        end
      end
    rescue Exception => msg
      puts "Error (get_parsed): " + msg.to_s
      return false, msg.to_s
    end
  end

  def get_all()
    begin
      status, containers = $proxmox.get_containers()
      if !status
        return false, "proxmox get_containers failed!"
      else
        return true, containers
      end
    rescue Exception => msg
      puts "Error (get_all): " + msg.to_s
      return false, msg.to_s
    end
  end

  def get_highest_vmid()
    ctids = []
    ctid_highest = 0

    begin
      status, all = get_all()
      if !status
        return false, "container get_all failed!"
      else
        if !all.nil?
          containers = {}
          all.each do |c|
            ctids.push(c.vmid)
          end
        end

        if ctids.length > 0
          ctids.sort!
          ctids.each do |s|
            if s.to_i > ctid_highest.to_i
              ctid_highest = s
            end
          end
          #puts "\t- - - - - - -"
          #printf "\tCTID: %-8s highest_CTID:     %s\n", ctids.length.to_s, ctid_highest.to_s
        else
          # return default id: 200
          ctid_highest = 200
        end

        if ctid_highest.to_i < 200
          return false, "Error: Unable to find highest CTID."
        else
          return true, ctid_highest
        end
      end
    rescue Exception => msg
      puts "Error (get_highest_vmid): " + msg.to_s
      return false, msg.to_s
    end
  end

  def generate_data(input_data)
    generated_data = {}
    pxm_hostname_prefix = $pxm_hostname_prefix
    pxm_disk_size_increase = $pxm_disk_size_increase
    pxm_ostemplate = $pxm_ostemplate

    begin
      status, highest_vmid = get_highest_vmid()
      if !status
        return false, "container get_highest_vmid failed!"
      end
    rescue Exception => msg
      puts "Error (generate_data): " + msg.to_s
      return false, msg.to_s
    end

    ct_id = (highest_vmid.to_i + 1)
    ct_ip = generate_ip(ct_id)
    ct_password = generate_pass(10)

    disk = input_data['disk']
    if disk.to_i < 1
      disk = 5
    else
      disk = input_data['disk']
    end

    ram = input_data['ram']
    if ram.to_i < 1
      ram = 1024
    else
      ram = input_data['ram']
    end

    generated_data['ctid'] = ct_id
    generated_data['hostname'] = pxm_hostname_prefix + ct_id.to_s
    generated_data['ostemplate'] = pxm_ostemplate
    generated_data['disk'] = (disk.to_i + pxm_disk_size_increase)
    generated_data['ram'] = ram.to_i
    generated_data['swap'] = 512
    generated_data['ipaddress'] = ct_ip
    generated_data['password'] = ct_password

    # debug print generated data/array
    # !!! ATTENTION: hash contains ct password
    #puts "generated data: #{generated_data.inspect}"

    return true, generated_data
  end

  def validate_input_data(input_data)
    output_data = {}

    input_data.each do |item, value|
      if item == 'disk'
        if value.nil?
          return false, { message: 'input error: value for "disk" must be set' }
        elsif value.to_i <= 4
          return false, { message: 'input error: "disk" must be higher them 4 (GB)' }
        else
          output_data[item] = value
        end
      elsif item == 'ram'
        if value.nil?
          return false, { message: 'input error: value for "ram" must be set' }
        elsif value.to_i <= 1023
          return false, { message: 'input error: "ram" must be higher them 1023 (MB)' }
        else
          output_data[item] = value
        end
      else
        return false, { message: "input error: item " + item.to_s + " is not allowed" }
      end
    end

    return true, output_data
  end

  def create(input_data)
    output_data = {}

    puts "Received JSON: #{input_data.inspect}"

    status, validated_data = validate_input_data(input_data)

    if !status
      # data validation failed
      # returning http 4xx
      return false, validated_data
    end

    status, generated_data = generate_data(validated_data)
    if !status
      # data generation failed
      # returning http 4xx
      return false, generated_data
    end

    status, rs = $proxmox.create_container(generated_data)
    if !status
      # container creation failed
      # returning http 4xx
      return false, rs
    end

    output_data = output_data.merge(generated_data)
    output_data = output_data.merge(rs)

    return true, output_data
  end

  private

  def generate_ip(ctid)
    ip_d = (ctid.to_i - 200) + 10
    ip = "192.168.222." + ip_d.to_s + '/24'
  end

  def generate_pass(number)
    charset = Array('A'..'Z') + Array('a'..'z') + Array('0'..'9')
    Array.new(number) { charset.sample }.join
  end
end

$proxmox = Proxmox.new($config_file,$pxm_master)

containers = Container.new()

# Endpoints
get '/' do
  "<html><body>proxmox-provisioning-server index page</body></html>\n"
end

# API Endpoints
namespace '/api' do
  before do
    content_type 'application/json'
  end

  helpers do
    def json_params
      data = request.body.read
      if data.to_s.empty?
        halt 411, { message:'Empty input data' }.to_json
      end
      begin
        JSON.parse(data)
      rescue
        halt 400, { message:'Invalid JSON' }.to_json
      end
    end
  end

  get do
    "{\"proxmox-provisioning-server api\"}\n"
  end

  get '/containers' do
    status, rs = containers.get_parsed()
    if status
      rs.to_json
    else
      halt 503, {'Content-Type' => 'text/plain'}, rs
    end
  end

  post '/containers/create' do
    input_data = json_params

    status, rs = containers.create(input_data)
    if status
      status 201
      rs.to_json
    else
      status 422
      rs.to_json
    end
  end
end
