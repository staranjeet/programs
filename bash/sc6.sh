#!/bin/bash
read n
i=0
s=0
while [ $i -lt $n ]
do
	read x
	s=$((s+x))
	i=$((i+1))
done
printf "%.3f" $(echo "scale=4; $s/$n"| bc)