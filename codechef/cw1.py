n=int(input())
str=raw_input()
for i in range(0,n):
	pat=raw_input()
	str=str.replace(pat,'')
if str:
	print str
else:
	print "0"