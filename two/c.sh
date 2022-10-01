echo "Number of users logged into the system:"
who | cut -d " " -f 1 | sort -u | wc -l
