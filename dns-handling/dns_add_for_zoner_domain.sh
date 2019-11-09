#!/bin/bash

if [ "${domain}" == "hcloud.cz" ]; then

  source export_props.properties;
  echo "sourced vmname: ${vmname}";
  echo "sourced vmid: ${vmid}";

  if [ ${vmid} -le 300 ]; then
    echo -e "ERROR: sourced ID is wrong! \nExiting..\n";
    exit 11;
  fi;

  vmname_full=${vmname}."hcloud.cz";

    echo "";
    echo "run script dns_modify_regzone.php...";
    echo "";

    IFS=$'\n'
    insert_rs=($(sudo timeout 60 php dns_modify_regzone.php --login-name "${login_name}" --login-password "${login_password}" --record-name "$vmname" --action insert --record-ip "${ip_address}"))
    insert_rv=$?;

    #mapfile -t insert_rs < <(sudo timeout 60 php dns_modify_regzone.php --login-name "${login_name}" --login-password "${login_password}" --record-name "$vmname" --action insert; insert_rv=\\$?;);

    printf "%s\n" "${insert_rs[@]}";

    if [ $insert_rv -eq 0 ]; then
      echo -e "\nINFO: dns record successfully inserted\n";
    else
      echo -e "\nERROR: insert DNS record failed! (${insert_rv})\n";
      exit 20;
    fi;

fi;
