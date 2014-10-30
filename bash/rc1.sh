#!/bin/bash
while read input
do
	echo "$input" >> out.txt
	if [[ -z $input ]]; then
		break
	fi
done
sort out.txt
