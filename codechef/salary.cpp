#include "bits/stdc++.h"
using namespace std;
int main(){
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		int max=a[n-1],s=0;
		for(i=0;i<n-1;i++)
			s+=(max-a[i]);
		printf("%d\n",s);
	}
	return 0;
}