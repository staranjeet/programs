#include "bits/stdc++.h"
using namespace std;
vector<int> sieve(int n)
{
	int primes[n+1];
	memset(primes,0,sizeof(primes));
	primes[0]=primes[1]=1;
	for(int i=3;i*i<=n;i++)
	{
		if(!primes[i])
			for(int j=i*i;j<=n;j+=i)
				primes[j]=1;
	}
	vector <int> pr;
	for(int i=0;i<=n;i++)
		if(!primes[i])
			pr.push_back(i);
	return pr;
}
int main()
{
	vector<int> prime=sieve(32000);
	vector<int>::iterator it;
	for(it=prime.begin();it!=prime.end();it++)
		cout<<*it<<" ";
	return 0;
}