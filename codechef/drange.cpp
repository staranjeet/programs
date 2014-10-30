#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,m,w,x,y,z,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int a[n+1];
		a[0]=0;
		for(i=1;i<=n;i++)
			a[i]=i;
		int d[n-1];
		for(i=0;i<n-1;i++)
			d[i]=1;
		while(m--)
		{
			scanf("%d%d%d%d",&w,&x,&y,&z);
			if(w==1)	//add
			{
				d[x-1-1]+=z;
				d[y-1]+=-z;
			}
			else
			{
				d[x-1-1]+=-z;
				d[y-1]+=z;
			}
		}
		int min=100000000,max=-1;
		for(i=2;i<=n;i++)
			a[i]=a[i-1]+d[i-2];
		for(i=1;i<=n;i++)
			{
				if(a[i]>max)
					max=a[i];
				if(a[i]<min)
					min=a[i];
			}
						printf("%d\n",max-min);
	}
	return 0;
}