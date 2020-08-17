require 'sinatra'
require "sinatra/namespace"

require 'opentracing'
require 'jaeger/client'
require 'rack/tracer'

OpenTracing.global_tracer = Jaeger::Client.build(service_name: 'proxmox-provisioning-server')

use Rack::Tracer

# DB Setup - Hidden

# Models - Hidden

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
    #containers.all.to_json
  end
end
