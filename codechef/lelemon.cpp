#include "bits/stdc++.h"
#define get getchar_unlocked
#define u(x) x=scan_f()
using namespace std;
inline int scan_f()
{
	int  n=0,s=1;
	char p=get();
	if(p=='-')
		s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')
		s=-1,p=get();
	while(p>='0' && p<='9')
	{
		n=(n<<3)+(n<<1)+p-'0';
		p=get();
	}
	return (n*s);
}
bool compare(int x,int y)
{
	return x>y;
}
int main()
{
	int t,n,m,i,j,x,y;
	/*scanf("%d",&t);*/
	t=scan_f();/*cout<<t;*/
	while(t--)
	{
		n=scan_f();m=scan_f();
		int p[m],sum=0;
	for(i=0;i<m;i++)
		p[i]=scan_f();
	vector<vector<int> > room(n);
	int track[n];
	for(i=0;i<n;i++)track[i]=1;
	for(i=0;i<n;i++)
	{
		x=scan_f();
		room[i].push_back(x);
		for(j=0;j<x;j++)
		{
			y=scan_f();
			room[i].push_back(y);
		}
		sort(room[i].begin()+1,room[i].end(),compare);
		/*for(j=0;j<x+1;j++)
			cout<<room[i][j]<<" ";
		cout<<endl;*/
	}
	for(i=0;i<m;i++)
	{
		if(track[p[i]]<=room[p[i]][0]){
			sum += room[p[i]][track[p[i]]];room[p[i]][track[p[i]]]=0;track[p[i]]++;
		}
		
		
	}
	cout<<sum<<endl;
}

	return 0;
}