# https://github.com/dmacvicar/terraform-provider-libvirt/tree/master/examples/v0.12/coreos
#
# https://github.com/ingobecker/tf-libvirt-fcos-gitlab-runner/blob/master/main.tf#L8
#
# https://github.com/coreos/fcct/blob/master/docs/configuration-v1_0.md
#
terraform {
  required_version = ">= 0.12"
}

# -[Provider]--------------------------------------------------------------
provider "libvirt" {
  uri = var.libvirt_uri
}

provider "ct" {
  version = ">= 0.6.1"
}

# -[Variables]-------------------------------------------------------------
variable "libvirt_uri" {
  type = string
  default = "qemu:///system"
}
variable "hosts" {
  default = 1
}

variable "hostname_format" {
  type    = string
  default = "hpa-owncloud-coreos-s%02d"
}

variable "user" {
  type    = string
  default = "core"
}

variable "password" {
  type    = string
  default = "core"
}

variable "ssh_key" {
  type    = string
  default = "ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAACAQCv+x4NKHMrFaS1VR71pnsGSq6en2EgmGBS3hHMm0l2AYBBwOVO2byokFo93w2IIe0tnJ+QerezGsAm1pGHrbx2HiTWF9uD+RyFQCQN0LKx1soMhEGryvjpS7rgDVMeCNn0Ej28m+NR1+6jhg4gA38c42ZZCcNd89pcpVWsMNpO/RVk25DfS/M5BJkUQMOoiMVwby0tJ62jh83fgzDMukynmA8xOX9D/uvL1kamEzbsA6Ioh8QRdBt4mlO6tnR6WxHTvGU5IHgE01Qm27s+YJpegH93VU0rxysGMGPd0VgvDHJmnR0l+ZR9d9T/iMzjxXw2ZX6FpG8JxwdAb9Wd2dySwFKZBwAXPtjm5GUTw22tk+gdk7FfgA2fjFeHGAVswX1loIREXMKpSuerGIrtroQwwBAEgnT84jqFnBYb5ApypaeKSQR1m6ZVnNjjBfj7t19lr+/hSRyorYZoGgFuryBY7R1UOH7zNAEnJlCLv7yab9ERCCwwukhP+nWoTjy6Fv+aF49LJpqiAbDV76TxAzjxvrFl4vv09NnVHVmYcIOaJuLWDmqS7CcLb8piFbcLvgTMxuN3OFZ0ybVfjA55bn9fPD2yIt57htwoaMU4sR3ULiybw6EAiIwJJT3Gq5WZ42Yh7G4WJIlnXCAy/4RL2Rtq/irXoaxn2Uw+KI0I5GkAOw== czhujer@czhujer-Latitude-5490"
}

locals {
  fcc_vars = {
    password                    = bcrypt(var.password)
    ssh_key                     = var.ssh_key
    user                        = var.user
  }
}

# -[Resources]-------------------------------------------------------------

# resource "local_file" "fcc_debug" {
#   content  = templatefile("${path.module}/content/fcc.yaml", local.fcc_vars)
#   filename = "${path.module}/foo.yaml"
# }

data "ct_config" "startup_ign" {
  content      = templatefile("${path.module}/content/fcc.yaml", local.fcc_vars)
  pretty_print = true
}

resource "libvirt_volume" "coreos-disk" {
  name             = "${format(var.hostname_format, count.index + 1)}.qcow2"
  count            = var.hosts
  base_volume_name = "fedora-coreos-32.20200726.3.1-qemu.x86_64.qcow2"
  pool             = "default"
  format           = "qcow2"
}

resource "libvirt_ignition" "ignition" {
  name    = "${format(var.hostname_format, count.index + 1)}-ignition"
  pool    = "default"
  count   = var.hosts
  #content = element(data.ignition_config.startup.*.rendered, count.index)
  content = data.ct_config.startup_ign.rendered
}

resource "libvirt_domain" "coreos-machine" {
  count  = var.hosts
  name   = format(var.hostname_format, count.index + 1)
  vcpu   = "2"
  memory = "1048"

  coreos_ignition = element(libvirt_ignition.ignition.*.id, count.index)

  disk {
    volume_id = element(libvirt_volume.coreos-disk.*.id, count.index)
  }

  graphics {
    listen_type = "address"
  }

  ## Makes the tty0 available via `virsh console`
  console {
    type = "pty"
    target_port = "0"
  }

  network_interface {
    network_name = "default"
    # Requires qemu-agent container if network is not native to libvirt
    wait_for_lease = true
  }

  ## mounts filesystem local to the kvm host. used to patch in the
  ## qemu-guest-agent as docker container
  #filesystem {
  #  source = "/srv/images/"
  #  target = "qemu_docker_images"
  #  readonly = true
  #}
}

# -[Output]-------------------------------------------------------------
output "ipv4" {
  value = libvirt_domain.coreos-machine.*.network_interface.0.addresses
}
