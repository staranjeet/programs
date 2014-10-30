#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long int lli;
/*lli power(lli x,lli n,lli m)
{
	if(n==0)return 1;
	if(n==1)return x;
	if(n%2==0)return power(x*x,n/2,m)%m;
	else return (x*power(x*x,(n-1)/2,m))%m;;
}*/

inline lli power(lli base,lli exp,lli m)
{
	lli res=1;
	while(exp>0)
	{
		if(exp%2==1)res=(res*base)%m;
		base=(base*base)%m;
		exp/=2;
	}
	return res;
}
int main()
{
	lli t,n,m,s,i,base,expp=4,res=1,t2;
	/*sieve();*/
	scanf("%llu",&t);
	while(t--)
	{
		/*cout<<power(2,8,1000);*/
		scanf("%llu%llu",&n,&m);
		s=0;
		/*n%=m;*/
		for(i=1;i<=n;i++)
		{
			lli t1=(n/i)%m;
			base=i;res=1;expp=4;
			/*while(expp>0){
				if(expp&1)res=(res*base)%m;
				base=(base*base)%m;
				expp>>=1;
			}*/
				res=(int)pow(i,4)%m;
			/*cout<<res<<endl;*/
			if(i<=(n/2))
			t2=(/*power(i,4,m)*/res*t1)%m;
			else
			 t2=res%m;
			s=s+ t2;
			s%=m;
			/*s=s+(power(i,4,m)*(n/i))%m;*/
			/*s=s+(((power(i,4,m)))*(n/i))%m;*/
			/*s+=(i*i*i*i*(n/i));*/
			/*s+=(((int)pow(i,4)%m)*(n/i))%m;*/
			/*s%=m;*/
		}
		printf("%llu\n",s);
	}
	return 0;
}