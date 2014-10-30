pattern="CcDdEFfGgABSCcDdEFfGgABS"
n=int(input())
for i in range(0,n):
	str=raw_input()
	arr=str.split(' ')
	x1=pattern.find(arr[0])
	x2=pattern.find(arr[1])
	x3=pattern.find(arr[2])
	if((x2-x1)%12==4 and (x3-x2)%12==3):
		print "Major"
	elif((x2-x1)%12==3 and (x3-x2)%12==4):
		print "Minor"
