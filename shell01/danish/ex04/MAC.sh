ifconfig | grep -o -E '([0-9A-Fa-f]{2}:){5}[0-9A-Fa-f]{2}' | xargs -n1 echo
