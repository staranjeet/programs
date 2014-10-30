#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007
typedef long long int lli;
lli power(lli base,lli exp,lli mod)
{
lli ans=1;
while(exp>0){
	if(exp&1)
		ans=(ans*base)%mod;
	base=(base*base)%mod;
	exp>>=1;
}
return ans;
}
lli modinverse(lli n)
{
	return power(n,MOD-2,MOD);
}
int main(){ _
	int t,i,j;
	lli fact[501];

	long long int num=1,dem=1,inv;
	fact[0]=1;
	for(i=1;i<501;i++)
		fact[i]=(fact[i-1]*i)%MOD;
	string s;
	cin>>t;
	while(t--){
	cin>>s;
	num=1;
	int co[65]={0};
	for(i=0;s[i];i++)
		co[s[i]-65]++;
	int x=s.size();
	/*for(i=1;i<=x;i++)
		num=(num*i)%MOD;*/
	num=fact[x];
	/*cout<<num<<endl;*/
	for(i=0;i<65;i++)
	{
		x=co[i];dem=1;
		/*for(j=1;j<=x;j++)
			dem=(dem*j)%MOD;*/
		dem=fact[x];
		inv=modinverse(dem);
		num=(num*inv)%MOD;
	}
	cout<<num<<endl;
}
	return 0;
}
