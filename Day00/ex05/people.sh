ldapsearch -H ldap://ldap-master.42.us.org -LLLQ "(uid=z*)" | grep "cn:" | sort -r
