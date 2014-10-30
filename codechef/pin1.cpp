/*#include "bits/stdc++.h"
using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii;
typedef long long int lli;

#define get(a) cin >> a 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(typeof((c).begin()) it = c.begin();it!= (c).end();it++)
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define show(a) tr(a,i){ cout << *i << endl; }
#define rep(n,i) for(i=0;i<n;i++)


long long solve(){
 	long long a,i,j,k,len;
 	scanf("%lld%lld",&a,&len);
 	long long  f[1000000];
 	long long  mul = 1;

 	bool isthere[11] = {false};


 	for(i=0;i<len;i++){
 		scanf("%lld",&f[i]);
 		if(isthere[ f[i] ] == false){
 			mul *= f[i];
 			isthere[f[i]] = true;
 		}

 	}

 	long long gcd = f[0],lcm;

 	for(i=1;i<len;i++){
 		gcd = __gcd(gcd,f[i]);
 	}

 	lcm = mul/gcd;

 	/*cout << lcm << endl;*/


 	/*return a/lcm;

 }




int main(){
 	lli i,j,k,l,p,q,x,y,t;
 	get(t);
 	while(t--)
 		cout << solve() << endl;

	return 0; 	
 }*/
	#include "bits/stdc++.h"
#define in(x) scanf("%d",&x)
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b)
{
	if(b>a) return gcd(b,a);
	if(a%b==0)return b;
	else return gcd(b,a%b);
}
int main(){
	int n,m,t,i;
	ll h,x,p;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int a[11]={0};
		scanf("%lld",&h);a[h]++;
		p=1;
		for(i=0;i<m-1;i++)
		{
			scanf("%lld",&x);
			a[x]++;
			/*p=p*x;*/
			h=gcd(h,x);
		}
		for(i=0;i<11;i++)
		{
			if(a[i])
				{p=p*a[i];
					cout<<i<<" ";
				}

		}	
		cout<<p<<endl;
		printf("%lld\n",n/(p/h));

	}
	return 0;
}
