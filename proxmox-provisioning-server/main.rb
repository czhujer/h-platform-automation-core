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
class Container
  # def initialize(id, hostname, disk, ram)
  #   @id         = id
  #   @hostname   = hostname
  #   @disk       = disk
  #   @ram        = ram
  # end

  def initialize()
  end

  def all(*)
    data = {
        id:"1",
        hostname:"test1"
    }
    data
  end
end

class Proxmox
  def initialize(config_file,pxm_master)
    config_file = config_file
    pxm_master = pxm_master

    connect(config_file,pxm_master)
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
      node = compute.nodes.find_by_id pxm_master
    rescue Exception => msg
      puts " Error: " + msg.to_s
    end

    #puts " Node stats: " + node.statistics.to_s
  end
end

proxmox = Proxmox.new($config_file,$pxm_master)

#containers = Container.new("1", "test1", 260, "")
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
    containers.all.to_json
  end
end
