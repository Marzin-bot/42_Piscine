cat /etc/passwd | cut -d: -f1 | grep -v \# | sed -n "p;n" | sort -r | tr '\n' ', '
