/*
Problem 7: 10001 prime
*/
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2)return false;
	if(n==2) return true;
	if(n%2==0)return false;
	for(int i=3;i<=sqrt(n);i+=2)
		if(n%i==0)return false;
	return true;
}
int main(){
	int i,c=0;
	for(int i=1;;i++)
	{
		if(isPrime(i))
			{
				c++;
				cout<<c<<" "<<i<<endl;
			}
		if(c==10001)
			{cout<<i<<endl;break;}
	}
	
	return 0;

}