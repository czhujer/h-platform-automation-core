# docs
#
# https://www.terraform.io/docs/providers/vsphere/r/virtual_machine.html
#
# https://www.terraform.io/docs/configuration/variables.html
#

variable "vmname" {
  type = "string"
}

variable "vmip" {
  type = "string"
}

variable "vm_gateway" {
  type = "string"
  default = "10.210.65.1"
}

variable "vm_netmask" {
  type = "string"
  default = "24"
}

variable "vm_dns_server_list" {
  type    = "list"
  default = ["10.222.222.222"]
}

variable "vm_data_disk_size" {
  type = "string"
}

## Configure the vSphere Provider
provider "vsphere" {
    vsphere_server = "${var.vsphere_server}"
    user = "${var.vsphere_user}"
    password = "${var.vsphere_password}"
    allow_unverified_ssl = true
}

## Build VM
data "vsphere_datacenter" "dc" {
  name = "DC01"
}

data "vsphere_datastore" "datastore" {
  name          = "ISCSI-DS-1"
  datacenter_id = "${data.vsphere_datacenter.dc.id}"
}

data "vsphere_resource_pool" "pool" {
  name          = "OwnCloud-v2"
  datacenter_id = "${data.vsphere_datacenter.dc.id}"
}

data "vsphere_network" "net" {
  name          = "net-owncloud"
  datacenter_id = "${data.vsphere_datacenter.dc.id}"
}

data "vsphere_virtual_machine" "template" {
  name          = "oc-template-c7"
  datacenter_id = "${data.vsphere_datacenter.dc.id}"
}

# resource "vsphere_compute_cluster" "compute_cluster" {
#   name            = "cluster01_1"
#   datacenter_id   = "${data.vsphere_datacenter.dc.id}"
# }

resource "vsphere_virtual_machine" "vm" {
  name             = "${var.vmname}"
  # annotation mus be same as in the template
  annotation       = "6GB datastore.. password: Digital\nyum update, erase NetworkManger & Firewalld\nselinux -> permissive, added (open-)vm-tools\n"
  #
  resource_pool_id = "${data.vsphere_resource_pool.pool.id}"
  datastore_id     = "${data.vsphere_datastore.datastore.id}"
  #cluster_id = "${data.vsphere_compute_cluster.compute_cluster.id}"
  #
  guest_id = "${data.vsphere_virtual_machine.template.guest_id}"
  scsi_type = "${data.vsphere_virtual_machine.template.scsi_type}"
  #
  num_cpus   = 2
  memory     = 1024
  #
  folder      = "OwnCloud-v2"
  #
  #dns_server_list = ""
  #
  network_interface {
   network_id     = "${data.vsphere_network.net.id}"
   adapter_type   = "${data.vsphere_virtual_machine.template.network_interface_types[0]}"
  }
  # system disk (must by same size or bigger then template)
  disk {
   size             = 10
   label            = "disk0"
   eagerly_scrub    = false
   thin_provisioned = false
  }
  # data disk
  disk {
   size             = "${var.vm_data_disk_size}"
   label            = "disk1"
   eagerly_scrub    = false
   thin_provisioned = false
   unit_number = 1
  }

  cdrom {
    client_device = true
  }

  clone {
    template_uuid = "${data.vsphere_virtual_machine.template.id}"

    customize {
      linux_options {
        host_name = "${var.vmname}"
        domain    = ""
      }

      network_interface {
        ipv4_address = "${var.vmip}"
        ipv4_netmask = "${var.vm_netmask}"
      }

      dns_server_list = "${var.vm_dns_server_list}"

      ipv4_gateway = "${var.vm_gateway}"
    }
  }
}
