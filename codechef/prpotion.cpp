#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
bool compare(int a,int b){
	return a>b;	
}
int red[101],green[101],blue[101];
int main(){ _
	long long int t,r,g,i,m,b,j;
	cin>>t;
	while(t--){
	cin>>r>>g>>b>>m;

	FOR(i,r)
	cin>>red[i];
	FOR(i,g)
	cin>>green[i];
	FOR(i,b)
	cin>>blue[i];
/*	sort(red,red+r,compare);*/
	/*FOR(i,r)
	cout<<red[i]<<" ";*/
	FOR(i,m){
		sort(red,red+r,compare);
		sort(green,green+g,compare);
		sort(blue,blue+b,compare);

		//for red one
		if(red[0]>=green[0] && red[0]>=blue[0])		//red is the largest one
		{
			FOR(j,r)
			red[j]/=2;
		}
		else if(green[0]>=red[0] && green[0]>=blue[0])	//green is the largest one
		{
			FOR(j,g)
			green[j]/=2;
		}
		else			//blue is the largest one
		{
			FOR(j,b)
			blue[j]/=2;
		}

	}
	sort(red,red+r,compare);
	sort(green,green+g,compare);
	sort(blue,blue+b,compare);
	if(red[0]>=green[0] && red[0]>=blue[0])
		cout<<red[0]<<endl;
	else if(green[0]>=blue[0])
		cout<<green[0]<<endl;
	else
		cout<<blue[0]<<endl;
	}


	return 0;
}
