#!/bin/bash
read x
printf "%.3f" $(echo "scale=4; $x"| bc)