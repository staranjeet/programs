#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ _
	int t,i;
	long long int n,m,left,right,x;
	cin>>t;
	while(t--){
	cin>>n>>m;
	left=n;right=-1;
	while(m--){
		cin>>x;
		if(x>right)right=x;
		if(x<left)left=x;
	}
	for(i=0;i<n;i++)
		cout<<max(abs(left-i),abs(right-i))<<" ";
	cout<<endl;
	}

	return 0;
}
