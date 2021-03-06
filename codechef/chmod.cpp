#include "bits/stdc++.h"
#define gc getchar_unlocked
using namespace std;
typedef long long int ll;
ll power(ll base,ll exp,ll m)
{
	ll ans=1;
	while(exp>0)
	{
		if(exp&1)ans=(ans*base)%m;
		base=(base*base)%m;
		exp>>=1;

	}
	return ans;
}
int scan_f()
{
	int n=0;
	char p=gc();
	while(p<'0' || p>'9')p=gc();
	while(p>='0' && p<='9'){n=(n<<3)+(n<<1)+p-48;p=gc();}
	return n;
}
	int primes[]={2 ,3 ,5 ,7 ,11 ,13 ,17 ,19 ,23 ,29 ,31 ,37 ,41 ,43 ,47 ,53 ,59 ,61 ,67 ,71 ,73 ,79 ,83 ,89 ,97};
	int freq[100001][25];
int main()
{
	

	int n,i,j,t,x,l,r,m;
	n=scan_f();
	for(j=0;j<25;j++)freq[0][j]=0;
		for(i=1;i<=n;i++)
		{
			x=scan_f();
			for(j=0;j<25;j++)
			{
				freq[i][j]=freq[i-1][j];
				while(x%primes[j]==0){freq[i][j]++;x/=primes[j];}
			}

		}
		t=scan_f();
		while(t--)
		{
			long long ans=1;
			l=scan_f();r=scan_f();m=scan_f();
			for(j=0;j<25;j++)
			{
				ans=(ans*(power(primes[j],freq[r][j]-freq[l-1][j],m)))%m;
			}
			printf("%lld\n",ans);
		}


	return 0;
}