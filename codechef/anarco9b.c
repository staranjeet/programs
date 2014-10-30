#include <stdio.h>
typedef long long int li;
li gcd(li a,li b)
{
	if(b>a) return gcd(b,a);
	if(a%b==0)return b;
	else return gcd(b,a%b);
}
int main()
{
	long long int a, b;
	while(1)
	{
		scanf("%lld%lld",&a,&b);
		if(a==0 && b==0)
			break;
		if(a==b)
			printf("1\n");
		else
			printf("%lld\n",(a*b)/(gcd(a,b)*gcd(a,b)));
	}
	return 0;
}
