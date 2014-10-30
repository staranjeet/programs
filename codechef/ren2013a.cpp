#include "bits/stdc++.h"
using namespace std;
int convert(int n,int base,int c)
{
	int s=0,r;
	for(int i=0;i<c;i++)
	{
		r=n%10;
		s+=r*pow(base,i);
		n/=10;
	}
	/*cout<<s<<endl;*/
	return s;
}
int findbase(int n)
{
	int m=-1,c=0,a=n,r;
	while(n!=0)
	{
		r=n%10;
		if(r>m)m=r;
		n/=10;c++;
	}
	/*cout<<m<<endl;*/
	return convert(a,m+1,c);

}

int main()
{
	int a,b,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
	
	
	printf("%d\n",findbase(a)+findbase(b));
	}
	
	return 0;
}