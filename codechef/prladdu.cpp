#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define MAX 100001

int main(){ 
	long long int t,n,d,c,ans,a[MAX];
	scanf("%lld",&t);
	while(t--){
	scanf("%lld",&n);
		FOR(i,n)
	scanf("%lld",&a[i]);
	d=a[0];ans=0;
	FORS(i,1,n){
		ans+=labs(d);
		d+=a[i];
	}
	printf("%lld\n",ans);
	}

	return 0;
}
