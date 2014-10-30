#!/bin/bash
while read input
do
	
	echo $input > output.txt
	cut -c3 output.txt
	if [[ -z "$input" ]]; then
		break
	fi
done
