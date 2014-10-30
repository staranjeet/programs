//sept 14 


#include <stdio.h>
#define MOD 1000000007
typedef long long int lli;
/*lli power(lli base,lli exp)
{
	lli ans=1;
	while(exp>0){
		if(exp&1)
			ans=(ans*base)%MOD;
		base=(base*base)%MOD;
		exp>>=1;
	}
	return ans;
}*/
lli ncr(lli n)
{
	int i;
	lli ans=1;
	for(i=n;i>=n-4;i--)
		ans=(ans*i)%MOD;
	ans=(ans*808333339)%MOD;
	return ans;
}
int main()
{
	lli n,ans=0,d,i;
	scanf("%lld",&n);
	if(n<13)printf("0\n");
	
	else
	{
		d=n-13;
		for(i=0;i<=d/2;i++)
		{
			ans+=ncr(i+5);
			if(ans>MOD)ans%=MOD;
			/*printf("%lld ",ans);*/
		}
			
		printf("%lld\n",ans);
	}

	return 0;
}