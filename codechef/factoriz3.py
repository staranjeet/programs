t=int(input())
for i in range(t):
	n=int(raw_input())
	lim=int(n**0.5)
	flag=0
	m=2
	for x in range(2,lim+1):
		if n%x==0:
			flag=1
			m=2
			break
	if flag:	#not a prime number
		print m
		print x
		print n/x
	else:
		print m
		print '1'
		print n
