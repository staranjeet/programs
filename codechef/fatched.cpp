#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000009
struct mydata{
	long long int y;
	char x;
};
bool compare(mydata a,mydata b){
	return (a.y<b.y);
}
int main(){ _
	long long int t,i,j,n,m;
	cin>>t;
	while(t--){
		
	cin>>n>>m;
	mydata my[m];
	/*char x[m];long long int y[m];*/
	FOR(i,m){
		cin>>my[i].x>>my[i].y;
	}
	sort(my,my+m,compare);
	long long int np,sw,ans=1;
	FORS(i,1,m){
		np=(my[i].y-my[i-1].y-1)%MOD;
		if(my[i].x==my[i-1].x)
			sw=1;
		else
			sw=(np+1)%MOD;
		ans=(ans*sw)%MOD;

	}
	cout<<ans<<endl;
	}

	return 0;
}
