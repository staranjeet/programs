#include "bits/stdc++.h"
using namespace std;
int distance(int x1,int y1,int x2,int y2)
{
	return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
}
int main()
{
	int t,a,b,c,count=0,x1,x2,x3,y1,y2,y3;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		a=distance(x1,y1,x2,y2);
		b=distance(x2,y2,x3,y3);
		c=distance(x1,y1,x3,y3);
		if((a+b==c)||(b+c==a)||(a+c==b))
			count++;

	}
	printf("%d\n",count);
	return 0;
}