ldapsearch -Q "(cn=z*)" | grep -i 'cn:' | sed 's/cn: //' | sort -r -f
