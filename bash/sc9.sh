#!/bin/bash
while read input
do
	echo $input > out.txt
	cut -c2-7 out.txt
	if [[ -z $input ]]; then
		break
	fi
done