#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,p,i,x,s;
	cin>>t;
	while(t--){
		s=0;
		cin>>n>>p;
		for(i=0;i<n;i++){
			cin>>x;
			if(x>=p)
				s++;
		}
		cout<<s<<endl;
	}
	return 0;
}