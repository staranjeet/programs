#include "bits/stdc++.h"
using namespace std;
int main()
{
	int n,k,i,j,x;
	
	scanf("%d%d",&n,&k);
	pair<int,int> p[n+1];
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		p[i].first=x;
		p[i].second=i;
	}
	sort(p,p+n);
	int a=0;
	for(i=0;i<n;)
	{
		a++;
		j=i+1;
		while(j<n && p[i].first==p[j].first && p[j].second-p[i].second<k)
			j++;
		/*cout<<j<<endl;*/
		i=j;
	}
	printf("%d\n",a);
	return 0;
}