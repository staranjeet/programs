#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x1,y1,x2,y2,x3,y3,a,b,c,r;
	cin>>t;
	while(t--){
		cin>>r;
		r=r*r;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		b=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		c=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
		if((a<=r && b<=r) || (a<=r && c<=r) || (b<=r && c<=r))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}