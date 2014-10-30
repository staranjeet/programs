//learned : precomputing primes

#include "bits/stdc++.h"
using namespace std;
int gcd(int a,int b)
{
	if(b>a)return gcd(b,a);
	if(a%b==0)return b;
	else return gcd(b,a%b);
}
int a[100001];
void sieve()
{
	a[0]=0;
	int i,j;
	for(i=1;i<=100000;i++)a[i]=i;
	for(i=2;i<=sqrt(100000)+1;i++)
	{
		if(a[i]==i)
		{
			for(j=2*i;j<=100000;j+=i)
				a[j]=min(a[j],i);
		}
	}
}
int main()
{
	int t,n,x,i,g;sieve();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		g=0;
		//int a[n];
		scanf("%d",&g);
		for(i=1;i<n;i++)
		{
			scanf("%d",&x);
			g=gcd(g,x);
		}
		if(g>1)
		printf("%d\n",a[g]);
	else
		printf("-1\n");
	}
	return 0;
}