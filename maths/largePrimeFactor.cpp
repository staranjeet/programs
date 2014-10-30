#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2)return false;
	if(n==2)return true;
	if(n%2==0)return false;
	int i;
	for(i=3;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	long long int no,i,count,t,max;
	cin>>t;
	while(t--){
		cin>>no;
		max=1;
	for(i=sqrt(no);i>0;i--){
		if(no%i==0 && isPrime(i)){
			if(i>max)max=i;
			else if((no/i)>max)max=i;
		}

	}
	cout<<max<<endl;	
	}
	
	
	return 0;
}