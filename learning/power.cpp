#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long int lli;

int main()
{
	lli expp=4,base=2,res=1,m=1000;
	for(int i=1;i<=4;i++)
	{
		base=i;res=1;expp=4;
		while(expp>0){
				if(expp&1)res=(res*base)%m;
				base=(base*base)%m;
				expp/=2;
			}
			cout<<res<<endl;
	}
	
	return 0;
}