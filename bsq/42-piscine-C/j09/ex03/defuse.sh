touch -r "bomb.txt" -A '-000001' "bomb.txt" | ls -l -T | cut -d" " -f12 | grep . | head -n 1
