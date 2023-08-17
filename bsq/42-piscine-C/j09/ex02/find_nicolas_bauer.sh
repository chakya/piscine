cat "contacts_hard.txt" | grep -i "bauer" | awk '{print $(NF-1)}'
