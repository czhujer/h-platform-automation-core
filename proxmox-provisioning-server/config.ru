# monitoring
require 'rack'
require 'prometheus/middleware/collector'
require 'prometheus/middleware/exporter'

# tracing
require 'opentracing'
require 'jaeger/client'
require 'rack/tracer'

# tracing init
OpenTracing.global_tracer = Jaeger::Client.build(service_name: 'proxmox-provisioning-server')

use Rack::Tracer

# monitoring init
use Rack::Deflater
use Prometheus::Middleware::Collector
use Prometheus::Middleware::Exporter

require './main'

run Sinatra::Application
