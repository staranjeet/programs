#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)

int mat[100][100];

int main(){ _
	int n,m,i,j,a,b,c,d,t,s;
	cin>>n>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>mat[i][j];
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;a--;b--;c--;d--;
		s=0;
		for(i=a;i<=c;i++)
			for(j=b;j<=d;j++)
				s+=mat[i][j];
		cout<<s<<endl;
	}

	return 0;
}
