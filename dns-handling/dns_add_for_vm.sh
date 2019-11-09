#!/bin/bash

if [ "${domain}" == "cust.hcloud.cz" ]; then

  # muster sql
  # INSERT INTO customer_dns VALUES ('test.hcloud.cz',259200,'A','10.10.10.10',0,0,129,'sp',0,0);

  # muster commnad
  #sudo mysql --defaults-extra-file=.my-ptproxy.cnf hportal -e 'show tables';

  source export_props.properties;
  echo "sourced vmname: ${vmname}";
  echo "sourced vmid: ${vmid}";

  if [ ${vmid} -le 300 ]; then
    echo -e "ERROR: sourced ID is wrong! \nExiting..\n";
    exit 11;
  fi;

  vmname_full=${vmname}."cust.hcloud.cz";

  SQL_CHECK="select name,rdtype,rdata,id_cust,service from hportal.customer_dns ORDER BY name ASC;"
  #SQL_CHECK="select name,rdtype,rdata,id_cust,service from hportal.customer_dns WHERE name LIKE '${vmname_full}' ORDER BY name ASC;"

  SQL_INSERT="INSERT INTO hportal.customer_dns VALUES ('${vmname_full}',3600,'A','${ip_address}',0,0,'','ocb2c',0,0);"

  sql_check_rs=$(sudo timeout 5 mysql --defaults-extra-file=/root/.my-ptproxy.cnf -e "$SQL_CHECK";)

  echo "";
  echo "print existing records from mysql database for DNS:";
  echo "";

  cnt=${#sql_check_rs[@]}
  for (( i=0 ; i<cnt ; i++ ))
  do
      echo "Record No. $i: ${sql_check_rs[$i]}" 
  done;
  echo "";

  if [[ "${sql_check_rs}" == *"${vmname_full}"* ]]; then
    echo "ERROR: Found existing DNS record in Mysql database.";
    exit 19;
  else
    echo "";
    echo "inserting DNS record into database...";
    echo "DEBUG: SQL: $SQL_INSERT";
    echo "";
    
    sql_insert_rs=$(sudo timeout 5 mysql --defaults-extra-file=/root/.my-ptproxy.cnf -e "$SQL_INSERT";)
    sql_insert_rv=$?
    
    echo $sql_insert_rs;
    
    if [ $sql_insert_rv -eq 0 ]; then
      echo "INFO: dns record successfully inserted";
    else
      echo "ERROR: insert DNS record failed!";
      exit 20;
    fi;
    
    echo "";
  fi;

  #dbquery_array=( $( for i in $dbquery ; do echo $i ; done ) )

  #echo $sql_check_rs;
fi;
