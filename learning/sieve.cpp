#include "bits/stdc++.h"
using namespace std;
#define LIM 100000000
bool primes[LIM+1];
void sieve()
{
	int i,j;
	for(i=0;i<=LIM;i++)
		primes[i]=true;
	primes[0]=primes[1]=false;
	for(i=2;i<=sqrt(LIM);i++)
	{
		if(primes[i])			// the number is a prime number
		{
			for(j=i*i;j<=LIM;j+=i)
				primes[j]=false;
		}
	}
}
int main()
{
	sieve();
	for(int i=0;i<=LIM;i++)
		if(primes[i])
			printf("%d , ",i);
	return 0;
}