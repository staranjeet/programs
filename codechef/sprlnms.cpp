#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ _
	int t,n,x;
	cin>>t;
	while(t--){
	cin>>n;
	x=n+n-1;
	cout<<x*x+n-1<<endl;
	}

	return 0;
}
