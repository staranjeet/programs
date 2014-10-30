'''t=int(input())
for i in range(0,t):
	n=int(input())
	x=1,m=1
	for
primes=[]'''
import psyco
psyco.full()
def prime_numbers(limit=100000):
	prim=[]
	sub_limit=int(limit**0.5)
	flags=[True,True]+[False]*(limit-2)
	prim.append(2)
	#yield 2
	for i in range(3,limit,2):
		if flags[i]:
			continue
		prim.append(i)
		#yield i
		if i<=sub_limit:
			for j in range(i*i,limit,i<<1):
				flags[j]=True
	return prim

prime_number1=prime_numbers(1000000)
t=int(input())
for i in range(t):
	n=int(input())
	factors=[]
	m=0
	for no in prime_number1:
		while n%no==0:
			factors.append(no)
			m=m+1
			n=n/no
		if n==0:
			break
	print m
	for x in factors:
		print x


