#!/bin/bash
start=`date +%s`
echo "----------------------------------------"
echo "create virtual machine and customize it..."
echo "----------------------------------------"

wd="/root/h-platform-automation-core/tf-owncloud"
tfbin="/opt/terraform_0.13.2/terraform"

source ${wd}/export_props.properties;

echo "INFO: sourced artifacts.."
echo "sourced vmid: ${vmid}";
echo "sourced vmname: ${vmname}";
echo "sourced vmip: ${vmip}";

if [ "x${vmid}" == "x" ]; then
  echo -e "ERROR: sourced ID missing! \nExiting..\n";
  exit 12;
fi;

if [ ${vmid} -le 300 ]; then
  echo -e "ERROR: sourced ID and IP addresss are wrong! \nExiting..\n";
  exit 11;
fi;

echo -e "\nINFO: running terraform plan & apply.."

#sudo /usr/bin/rm /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate -f || exit 1;
#sudo /usr/bin/rm /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate.backup -f || exit 1;

bash -c "cd ${wd} && ${tfbin} plan -no-color -input=false -var-file=\"${vmname}.tfvars\" -state=\"terraform.tfstate.${vmname}\"; exit \$?" || exit 1;

bash -c "cd ${wd} && ${tfbin} apply -auto-approve -no-color -input=false -var-file=\"${vmname}.tfvars\" -state=\"terraform.tfstate.${vmname}\"; exit \$?" || exit 1;

#sudo /usr/bin/rm /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate -f || exit 1;
#sudo /usr/bin/rm /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate.backup -f || exit 1;
#sudo /usr/bin/mv /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate.${vmname} || exit 1;
#sudo /usr/bin/mv /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate.backup /root/repos/h-platform-automation-cm-tf-owncloud/terraform.tfstate.backup.${vmname};

#echo "temporary sleeping 300second"
#sleep 300;

end=`date +%s`
echo -e "\ntime: "$((end-start))" seconds"
