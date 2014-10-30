#include "bits/stdc++.h"
using namespace std;
int main(){
	int n,temp,i,x,j,m=0;
	cin>>n;
	int a[250];
	temp=n;
	while(temp!=0){
		a[m++]=temp%10;
		temp/=10;
	}
	/*cout<<m;*/
	temp=0;
	for(i=1;i<n;i++){
		temp=0;
		for(j=0;j<m;j++)
		{
			x=a[j]*i+temp;
			temp=x/10;
			a[j]=x%10;
		}
		while(temp!=0){
			a[m++]=temp%10;
			temp/=10;
		}
	}
		for(i=m-1;i>=0;i--)
			cout<<a[i];
	
	return 0;
}