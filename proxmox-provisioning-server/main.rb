# web
require 'sinatra'
require "sinatra/namespace"

# tracing
require 'opentracing'
require 'jaeger/client'
require 'rack/tracer'

# proxmox

# tracing init
OpenTracing.global_tracer = Jaeger::Client.build(service_name: 'proxmox-provisioning-server')

use Rack::Tracer

# Models
class Container
  def initialize(id, hostname, disk, ram)
    @id         = id
    @hostname   = hostname
    @disk       = disk
    @ram        = ram
  end

  def all(*)
    data = {
        id:"1",
        hostname:"test1"
    }
    data
  end
end

containers = Container.new("1", "test1", 260, "")

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
    "proxmox-provisioning-server api\n"
  end

  get '/containers' do
    containers.all.to_json
  end
end
