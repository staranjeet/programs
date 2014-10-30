#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t,i,u,n,month,cost;
	float call,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f%d%d",&d,&u,&n);
		float init=(float)u*d,sum;int index=-1;
		for(i=0;i<n;i++)
		{
			scanf("%d%f%d",&month,&call,&cost);
			sum=(float)cost/month+call*(float)u;
			/*cout<<sum<<endl;*/
			if(sum<init){init=sum;index=i;}
		}
		if(index==-1)printf("0\n");
		else printf("%d\n",index+1);

	}
	return 0;
}