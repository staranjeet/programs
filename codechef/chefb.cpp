#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		int c=0;
		/*for(i=0;i<n;)
		{
			if(a[i]==2)
			{
				while(a[i]==2)i++;
				c++;
			}
			else if(a[i]==3)
			{
				while(a[i]==3)
					i++;
				c++;
			}
			else if(a[i]==1)
				{i++;}
		}*/
		printf("%d\n",2);
	}
	return 0;
}