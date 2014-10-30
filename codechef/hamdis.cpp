#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,s=0,i;
	cin>>t;
	while(t--){
		cin>>a>>b;
		bitset<32> a1=a;
		bitset<32> b1=b;
		s=0;
		for(i=0;i<32;i++)
			s+=(a1[i]^b1[i]);
		cout<<s<<endl;
	}
	return 0;
}