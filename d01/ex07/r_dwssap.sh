cat /etc/passwd | grep -v '\#' | sed -n 'p;1!n' | cut -d : -f 1 | rev | sort -r | sed ''$FT_LINE1','$FT_LINE2'!d' | tr '\n' ',' | sed 's/,$/./g' | sed 's/,/, /g'
