#include "bits/stdc++.h"
#define get getchar_unlocked
#define u(x) x=scan_f()
typedef long long int li;
using namespace std;
li scan_f()
{
	li n=0,s=1;
	char p=get();
	if(p=='-')s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')s=-1,p=get();
	while(p>='0' && p<='9')
	{
		n=(n<<1)+(n<<3)+p-'0';
		p=get();
	}
	return (n*s);
}
int main()
{
	long long int s=0,x=0,p=1,n;
	/*scanf("%lld",&n);*/u(n);
	/*int a[n];*/
	
	for(int i=0;i<n;i++)
	{
		/*scanf("%lld",&x);*/u(x);
		s+=x;
	}
	p=(n*(n+1))/2;
	if(s==p)
		puts("YES");
	else
		puts("NO");
	return 0;
}