#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)

bool matrix[101][101]={false};
int main(){ _
	int i,j,a,b,n,m,k,t;
	vector<pair<int,int> >p;
	vector<pair <int,int> >h;
	for(i=0;i<101;i++)
		for(j=0;j<101;j++)
			matrix[i][j]=false;
	cin>>n>>m>>k;
	for(i=0;i<k;i++)
	{
		cin>>a>>b;
		matrix[a][b]=true;
	}
	/*for(i=1;i<=n;i++)
		{for(j=1;j<=m;j++)
			cout<<matrix[i][j]<<" ";
		cout<<endl;}*/
	int c=0;
	for(j=1;j<=m;j++){
		c=0;
		t=0;
		bool pushedonce=false;
		for(i=1;i<=n;i++){
			if(matrix[i][j]==false)
				c++;
			else{
				if(i!=1 && matrix[i-1-c/2][j]==false)
				p.push_back(make_pair(i-1-c/2,j));
				c=0;
				pushedonce=true;
			}
		}
			if(matrix[i-1-c/2][j]==false)
			p.push_back(make_pair(i-1-c/2,j));
	}
	int c1=0;
	for(i=1;i<=n;i++){
		c1=0;
		t=0;
		bool pushedonce2=false;
		for(j=1;j<=m;j++){
			if(matrix[i][j]==false)
				c1++;
			else{
				if(j!=1 && matrix[i][j-1-c1/2]==false)
				h.push_back(make_pair(i,j-1-c1/2));
				c1=0;
				pushedonce2=true;
			}
		}
			if(matrix[i][j-1-c1/2]==false)
			h.push_back(make_pair(i,j-1-c1/2));
	}
	//sort(p.begin(),p.end());
	vector< pair<int,int > >::iterator it;
	if(h.size()<p.size())
	{
		cout<<h.size()<<endl;
		for(it=h.begin();it!=h.end();it++){
		
		cout<<(*it).first<<" "<<(*it).second<<" "<<0<<endl;
	}
	}
	else{
		cout<<p.size()<<endl;
		for(it=p.begin();it!=p.end();it++){
		
		cout<<(*it).first<<" "<<(*it).second<<" "<<1<<endl;
	}
	}
	
	
	


	return 0;
}
