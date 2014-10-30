#include <bits/stdc++.h>
/*#define _ ios_base::sync_with_stdio(0);cin.tie(0);*/
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ 
	int t;
	long long int n,a;
	scanf("%d",&t);
	while(t--){
	scanf("%lld",&n);
	a=n+(n*(n+1))/2;
	printf("%lld\n",a);
	}

	return 0;
}
