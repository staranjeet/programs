#!/bin/bash
x=$(</dev/stdin)
echo "$x" | tr "()" "[]"