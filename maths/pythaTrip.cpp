#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,a,b,c;
	for(i=1;i<=1000;i++)
	{
		for(j=1;j<=1000;j++){
			for(k=1;k<=1000;k++)
				if((i*i+j*j)==k*k && (i+j+k)==1000)
				{
					a=i;b=j;c=k;
				}
		}
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<a*b*c;
	return 0;
}