#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,i,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			cout<<i<<": ";
			for(k=1;k<=n;k++)
				printf("(%d,%d) ",k,(k+i)%n);
			cout<<endl;
		}
	}
	return 0;
}