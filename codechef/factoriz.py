
# def prime_numbers(limit=100000):
# 	prim=[]
# 	sub_limit=int(limit**0.5)
# 	flags=[True,True]+[False]*(limit-2)
# 	prim.append(2)
# 	#yield 2
# 	for i in range(3,limit,2):
# 		if flags[i]:
# 			continue
# 		prim.append(i)
# 		#yield i
# 		if i<=sub_limit:
# 			for j in range(i*i,limit,i<<1):
# 				flags[j]=True
# 	return prim
import psyco
psyco.full()
def sieve(n):
    m = (n-1) // 2
    b = [True]*m
    i,p,ps = 0,3,[2]
    while p*p < n:
        if b[i]:
            ps.append(p)
            j = 2*i*i + 6*i + 3
            while j < m:
                b[j] = False
                j = j + 2*i + 3
        i+=1; p+=2
    while i < m:
        if b[i]:
            ps.append(p)
        i+=1; p+=2
    return ps

prime_number1=sieve(1000000000)
prime_number1.sort()
t=int(input())
for i in range(t):
	n=int(input())
	factors=[]
	m=0
	lim=int(n**0.5)
	for no in prime_number1:
		if no<=lim:
			if n%no==0:
				factors.append(no)
				factors.append(n/no)
				m=m+2
				break
			# 	n=n/no
			# if n==0:
			# 	break
	print m
	for x in factors:
		print x




