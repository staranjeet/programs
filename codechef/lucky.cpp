#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ _
	int t,c,i;
	cin>>t;
	string s;
	while(t--){
		c=0;
	cin>>s;
	for(i=0;s[i];i++)
		if(s[i]!='4' && s[i]!='7')
			c++;
	cout<<c<<endl;
	}

	return 0;
}
