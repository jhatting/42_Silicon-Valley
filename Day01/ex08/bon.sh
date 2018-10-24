ldapsearch -H ldap://ldap-master.42.us.org -x "(sn=*bon*)" | grep 'cn:' |wc -l | bc
