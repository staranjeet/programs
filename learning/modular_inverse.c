#include <stdio.h>
typedef long long int lli;
lli power(lli base,lli exp,lli mod)
{
	lli ans=1;
	while(exp>0)
	{
		if(exp&1)
			ans=(ans*base)%mod;
		base=(base*base)%mod;
		exp>>=1;
	}
	return ans;
}
lli mod_inverse(lli n,lli mod)
{
	return power(n,mod-2,mod);
}
int main()
{
	printf("%lld",mod_inverse(120,1000000007));
	return 0;
}