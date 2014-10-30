#include "bits/stdc++.h"
using namespace std;
bool compare(int a,int b)
{
	return a>b;
}
int main()
{
	int t,n,i;
	long long int s=0;
scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n,compare);s=0;
		for(i=0;i<n;i+=2)
			s+=a[i];
		printf("%lld\n",s);
	}
	return 0;
}