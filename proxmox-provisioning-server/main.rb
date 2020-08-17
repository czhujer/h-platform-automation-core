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

# vars
$config_file = "/root/proxmox-config.yaml"
$pxm_master = Socket.gethostname

# tracing init
OpenTracing.global_tracer = Jaeger::Client.build(service_name: 'proxmox-provisioning-server')

use Rack::Tracer

# Models
class Proxmox
  def initialize(config_file,pxm_master)
    config_file = config_file
    pxm_master = pxm_master
    @node

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

  private

  def connect(config_file,pxm_master)
    config_file = config_file
    pxm_master = pxm_master

    #load proxmox login
    cnf = YAML::load(
        File.open($config_file)
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
      puts " Error (proxmox): " + msg.to_s
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
      puts " Error (get_parsed): " + msg.to_s
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
      puts " Error (get_all): " + msg.to_s
      return false, msg.to_s
    end
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
end
