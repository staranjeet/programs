#include <bits/stdc++.h>
using namespace std;
#define LIM 2000000
bool isPrime(int n){
if(n==2)return true;
if(n<2 || n%2==0)return false;
for(int i=3;i<=sqrt(n);i+=2)
	if(n%i==0)
		return false;
	return true;
}
int main(){
	long long int i,s=0;
	for(i=2;i<=LIM;i++)
		if(isPrime(i))
			s+=i;
	cout<<s;
	return 0;
}