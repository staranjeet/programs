#include"bits/stdc++.h"
#define get getchar_unlocked
int scan_f()
{
	int n=0,s=1;
	char p=get();
	if(p=='-')
		s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')
		s=-1,p=get();
	while(p>='0' && p<='9')
	{
		n=(n<<3)+(n<<1)+p-'0';
		p=get();
	}
	return (n*s);
}
using namespace std;
int main()
{
	int n,i,j,x;
	long long bits[64],ans=0,num;
	for(i=0;i<64;i++)
		bits[i]=0;
	n=scan_f();
	//cout<<n;
	//cin>>n;
	for(i=0;i<n;i++)
	{
		x=scan_f();
		//cin>>x;
		for(j=0;j<64;j++)
		{
			if(x&1)
				bits[j]++;
			x>>=1;
			if(!x)
				break;
		}
	}
	ans=0;
	num=1;
	for(i=0;i<64;i++)
	{
		ans+=(bits[i]*(bits[i]-1)*num)/2;
		num*=2;
	}
	cout<<ans<<endl;
	return 0;
}