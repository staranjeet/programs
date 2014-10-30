#include "bits/stdc++.h"
using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii;
typedef long long int lld;
#define getw getchar_unlocked
#define get(a) geta(&a)
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(typeof((c).begin()) i = c.begin();i!= (c).end();i++)
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define show(a) tr(a,i){ cout << *i << endl; }
#define rep(n,i) for(i=0;i<n;i++)


template < typename T >
inline void geta(T *a){
	T n=0,s=1;
	char p=getw();
	if(p=='-') s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=getw();
	if(p=='-') s=-1,p=getw();
	while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=getw(); }
	*a = n*s;
}

lld solve(){
	string str[1000];
	lld n,i,j,k,l;
	get(n);

	rep(n,i){
		cin >> str[i];
	}

	bool bits[1001][1001] = {0};


	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			if(str[i][j] == '#') break;
			else bits[i][j] = 1;
		}
	}
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		cout<<bits[i][j]<<" ";
	cout<<endl;
	}


	int ans = 0;

	for(j=0;j<n;j++){
		for(i=n-1;i>=0;i--){
			if(str[i][j] == '#') break;
			if(bits[i][j] == 1) ans++; 
		}
	}

	return ans;
}

 int main(){
	lld i,j,k,l;
	vi a;
	lld t;
	get(t);
	while(t--){
		printf("%lld\n",(lld)solve() );
	}	
	return 0; 	
 }


