ldapwhoami -Q | awk -F: '{ print $2 }'
