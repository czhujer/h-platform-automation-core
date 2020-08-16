#!/usr/local/rvm/rubies/default/bin/ruby

# https://github.com/fog/fog
# https://github.com/fog/fog/tree/master/lib/fog/openvz
#require 'fog'

# https://github.com/fog/fog-proxmox
require 'fog/proxmox'

# http://stackoverflow.com/posts/4248426/revisions
require 'optparse'

# http://fog.io/about/getting_started.html
# storing passwords

# https://docs.ruby-lang.org/en/2.1.0/Socket.html
require 'socket'

#variables

options = {}
OptionParser.new do |opts|
  opts.banner = "Usage: pxm-create-container.rb [options]"

  opts.on('-h', '--hostname HOSTNAME', 'Hostname of new container') { |v| options[:hostname] = v }
  opts.on('-m', '--master MASTER_HOSTNAME', 'Hostname of master server') { |v| options[:master] = v }
  opts.on('-d', '--disk SIZE_IN_GB', 'Size of disk for container') { |v| options[:disk_size] = v }
  opts.on('-r', '--ram SIZE_IN_MB', 'Size of disk for container') { |v| options[:ram_size] = v }

end.parse!

if  options[:master].nil?
 $master_selected = "localhost"
else
 $master_selected = options[:master]
end

if options[:disk_size].to_i > 0
 $disk_size_selected = options[:disk_size].to_i
else
 $disk_size_selected = 5
end

if options[:ram_size].to_i > 0
 $ram_size_selected = options[:ram_size].to_i
else
 $ram_size_selected = 1024
end

$ctid_highest = 200

# increase disk for OS space
$disk_size_selected = $disk_size_selected + 5

# basic template
$pxm_ostemplate = "local:vztmpl/centos-7-default_20190926_amd64.tar.xz"

$pxm_hostname_prefix = "oc-"

#$pxm_capability = "NET_ADMIN:on SYS_TIME:on"
$pxm_capability = ""

$pxm_masters = Array.new
#$pxm_masters.push("hpa-pxm1")
$pxm_masters.push(Socket.gethostname)

jenkins_export = File.open("/home/jenkins-slave/workspace/create-owncloud-b2c-container/export_props.properties", 'w')
#methods
def generate_ip(master, ctid)
    ip_d = (ctid.to_i - 200) + 10
    ip = "192.168.222." + ip_d.to_s + '/24'
end

def generate_pass(number)
    charset = Array('A'..'Z') + Array('a'..'z') + Array('0'..'9')
    Array.new(number) { charset.sample }.join
end

#main loop
#
$pxm_masters.each do |master|

  $ctids = Array.new

  # connect to compute
  puts "connect to promox server(s)..."

  compute = Fog::Compute::Proxmox.new(
      #pve_username: 'root@pam',
      #pve_password: 'password',
  		pve_url: 'https://127.0.0.1:8006/api2/json',
  		connection_options: {
        ssl_verify_peer: false,
      }
  )

  begin
    node = compute.nodes.find_by_id master
  rescue Exception => msg
    puts " Error: " + msg.to_s
  end

  #puts " Node stats: " + node.statistics.to_s

  # loading existing containers
  #
  puts "loading existing containers..."

  begin
    containers = node.containers.all
  rescue Exception => msg
    puts " Error: " + msg.to_s
  end

  if !containers.nil?
    containers.each do |c|
      $ctids.push(c.vmid)
      #puts " ID: " + c.vmid.to_s + " Hostname: " + c.config.hostname
      printf "\tID: %-10s Hostname:     %s\n", c.vmid, c.config.hostname
      #puts c.inspect
    end
  else
    puts " Error: any containers not found"
  end

  if $ctids.length > 0

    #find hightest value
    $ctids.sort!

    $ctids.each do |s|
      if s.to_i > $ctid_highest.to_i
        $ctid_highest = s
      end
    end

    puts "\t- - - - - - -"
    printf "\tCTID: %-8s highest_CTID:     %s\n", $ctids.length.to_s, $ctid_highest.to_s
    #puts " CTIDs: " + $ctids.length.to_s + " highest_CTID: " + $ctid_highest.to_s

  end

#end of main loop
end

if $ctid_highest.to_i < 1
  puts "Error: Unable to find highest CTID."
  puts "exiting"
  exit 2
end

puts "\t--> global highest CTID: " + $ctid_highest.to_s

# Create a server
#
puts "connect to proxmox server..."

compute = Fog::Compute::Proxmox.new(
    #pve_username: 'root@pam',
    #pve_password: 'password',
    pve_url: 'https://127.0.0.1:8006/api2/json',
    connection_options: {
      ssl_verify_peer: false,
    }
)

begin
  node = compute.nodes.find_by_id $master_selected
rescue Exception => msg
  puts " Error: " + msg.to_s
end

ctid_new = ($ctid_highest.to_i + 1)

if options[:hostname] == nil
    hostname_gen = $pxm_hostname_prefix + ctid_new.to_s
    options[:hostname] = hostname_gen
end

ip = generate_ip($master_selected, ctid_new)

ct_password = generate_pass(10)

puts "writing variables to jenkins export file..."

ip_without_mask=ip.split('/')
ip_without_mask=ip_without_mask[0]

jenkins_export.write('vmid=' + ctid_new.to_s + "\n")
jenkins_export.write('vmname=' + options[:hostname] + "\n")
jenkins_export.write('vmip=' + ip_without_mask.to_s + "\n")

puts "creating container..."

puts "\t--> CTID: " + ctid_new.to_s
puts "\t--> selected master: " + $master_selected.to_s
puts "\t--> ostemplate: " + $pxm_ostemplate.to_s
puts "\t--> disk: " + $disk_size_selected.to_s + " (GB)"
puts "\t--> hostname: " + options[:hostname]
puts "\t--> RAM: " + $ram_size_selected.to_s + " (MB)"
puts "\t--> ip address: " + ip.to_s
puts "\t--> root password: " + ct_password.to_s
puts ""

container_new = node.containers.create({
  vmid:       ctid_new,
  storage:    'local',
  ostemplate: $pxm_ostemplate,
  password:   ct_password,
  #ip_address: ip,
  memory:     $ram_size_selected.to_s,
  swap:       '512',
  hostname:   options[:hostname],
  rootfs:     'local:'+$disk_size_selected.to_s,
  onboot:     '1',
})

if container_new == true
  puts "container successfully created"
  puts " (ret_val create: " + container_new.to_s + ")"
  #container_new.reload
else
  puts "container creation failed"
  puts " (ret_val create: " + container_new.to_s + ")"
  exit 12
end

puts "get container context..."
container = node.containers.get ctid_new

puts "add network card..."
ct_update_rs = container.update({ net0: 'bridge=vmbr0,name=eth0,ip=' + ip.to_s + ',gw=192.168.222.1'})

puts "update rs: " + ct_update_rs.to_s

# start container
container.action('start')
container.wait_for { ready? }
status = container.ready?

if status == true
  puts "container successfully started"
  puts " (ct status: " + status.to_s + ")"
else
  puts "container starting failed"
  puts " (ct status: " + status.to_s + ")"
end

exit 0
