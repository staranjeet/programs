//oct 14 correct
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector < long long > vll;
typedef pair < long long, long long > pll;

#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,a,n) for(int i = a; i < n; i++)
#define get(n) cin >> n
int a[110];
int main(){
	int t,n,m,i,s,c,max;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			cin>>a[i];
		max=a[0];s=0;c=0;
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		rep(i,n){
			if(a[i]!=max)
				s+=a[i];
			else if(a[i]==max)
				c++;
		}

		if((m-(max*(n-c)-s))%n==0)
			puts("Yes");
		else
			puts("No");
	
	}

	return 0;
}
