#include <stdio.h>
int main()
{
	int t,x,i;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			scanf("%d",&x);
		printf("%lld\n",(n*(n-1)/2));
	}
	return 0;
}