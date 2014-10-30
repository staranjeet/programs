#include "bits/stdc++.h"

using namespace std;
int main(){
	int n,c=0;
	scanf("%d",&n);
	int a[1001],i,t,cycle[3005],index=0;

	
	for(i=0;i<=1000;i++)
		a[i]=0;
	int b[n+1];
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
	{
		t=i;
		if(a[b[i]]==0)

		{	a[i]=1;
			c++;
			/*printf("%d ",i);*/
		
		while(t!=b[i])
		{
			if(a[b[i]]==0)
			{
				a[b[i]]=1;
				// printf("%d ",b[i]);

			}
			i=b[i];
		}
		/*printf("%d ",t);
		printf("\n");*/
	}
		i=t;

	}
	for(i=0;i<=1000;i++)
		a[i]=0;
	printf("%d\n",c);
	for(i=1;i<=n;i++)
	{
		t=i;
		if(a[b[i]]==0)

		{	a[i]=1;
			c++;
			printf("%d ",i);
		
		while(t!=b[i])
		{
			if(a[b[i]]==0)
			{
				a[b[i]]=1;
				printf("%d ",b[i]);

			}
			i=b[i];
		}
		printf("%d ",t);
		printf("\n");
	}
		i=t;

	}
	
	return 0;
}
