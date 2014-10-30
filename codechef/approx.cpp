#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,k,i,t1,t2,x;
	int decimal[1000000];

	scanf("%d",&t);
	t1=4687;
	for(i=0;i<1000000;i++)
	{
				t2=t1*10;
				x=t2/33102;
				decimal[i]=x;
				/*printf("%d",x);*/
				t1=t2%33102;
	}
	while(t--)
	{
		scanf("%d",&k);
		if(!k)
			printf("3\n");
		else
		{
			printf("3.");
			
			for(i=0;i<k;i++)
			{
				printf("%d",decimal[i]);
			}
			printf("\n");
		}
	}

	return 0;
}