/*
Problem 20: Factorial Digit Sum
factDigSum
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,temp,m=0,x;
	int a[250];
	cin>>n;
	temp=n;
	while(temp!=0){
		a[m++]=temp%10;
		temp/=10;
	}
	temp=0;
	for(i=1;i<n;i++){
		temp=0;
		for(j=0;j<m;j++){
			x=a[j]*i+temp;
			temp=x/10;
			a[j]=x%10;
		}
		while(temp!=0){
			a[m++]=temp%10;
			temp/=10;
		}
	}
	int s=0;
	for(i=m-1;i>=0;i--)
		s+=a[i];
	cout<<s<<endl;
	return 0;
}