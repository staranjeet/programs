#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
long long int collatz(long long int n){
	long long int c=1;
	while(n!=1){
		if(n%2==0)
			n=n/2;
		else if(n&1)
			n=(3*n)+1;
		c++;
	}
	return c;
}
int main(){
	long long int max=0,t;
	/*cout<<collatz(13);*/
for(int i=1;i<=MAX;i++){
	t=collatz(i);
	//cout<<i<<",";
	if(t>max)max=t;
}
cout<<max;
	return 0;
}