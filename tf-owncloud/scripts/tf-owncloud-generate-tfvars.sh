#!/bin/bash
set -eo pipefail

start=`date +%s`
echo "----------------------------------------"
echo "generate ID, name and IP address..."
echo "----------------------------------------"

wd="/root/h-platform-automation-core/tf-owncloud"

count=`find ${wd} -name '*.tfvars' ! -name oc-xyz.tfvars ! -name "terraform.tfvars" -type f -print  |sort -h`

if [ "$count" == "" ]; then
  echo "first file.."
  vmid='301'
  vmname='oc-301'
  vmip='10.210.65.101'
else
  echo "file(s) found..";
  last=`find ${wd} -name '*.tfvars' ! -name oc-xyz.tfvars ! -name "terraform.tfvars" -type f -print 2>/dev/null |sort -h | tail -1 |grep -o '[0-9][0-9][0-9]'`
  echo "last id: ${last}";
  vmid=$((last + 1))
  vmname="oc-"${vmid}
  vmip_4th=$((vmid - 200))
  vmip="10.210.65."${vmip_4th}
fi;

if [ ${vmid} -le 300 ]; then
  echo -e "ERROR: generating ID and IP addresss failed! \nExiting..\n";
  echo -e "vmid=\nvmname=\nvmip=\n" > ${wd}/export_props.properties;
  exit 11;
else
  echo -e "\nINFO: generating artifacts.."
  # save vars into artifact
  echo -e "vmid=${vmid}\nvmname=oc-${vmid}\nvmip=${vmip}\ndomain=${domain}\n" > ${wd}/export_props.properties || exit 1;
  # save vars into tf file
  echo -e "vmname = \"${vmname}\"\nvmip = \"${vmip}\"\nvm_data_disk_size = \"${datastore_size}\"\n" | tee ${wd}/${vmname}.tfvars || exit 1;
fi;

end=`date +%s`
echo -e "\ntime: "$((end-start))" seconds"
