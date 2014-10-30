#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,m=1,x,temp;
	cin>>n;
	int a[1000];
	a[0]=2;
	for(i=1;i<n;i++){
		temp=0;
		for(j=0;j<m;j++){
			x=a[j]*2+temp;
			temp=x/10;
			a[j]=x%10;
		}
		while(temp!=0){
			a[m++]=temp%10;
			temp/=10;
		}
	}
	long long int s=0;
	for(i=m-1;i>=0;i--)
		s+=a[i];
	cout<<s;
	return 0;
}