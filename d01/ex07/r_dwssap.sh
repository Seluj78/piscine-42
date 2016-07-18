cat /etc/passwd | grep -v "^#" | cut -d : -f 1 | rev | awk "NR%2==1" | sort -r | awk "NR==$FT_LINE1, NR==$FT_LINE2" | sed "s/$/, /" | tr -d "\n" | sed "s/, $/./" | tr -d "\n"
