#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,x,c=0;
	cin>>n>>m;
	if(m&1){
	for(j=0;j<n/m;j++){
		x=(m+1)/2;
/*		cout<<"j = "<<j;*/
		for(i=0;i<=m/2;i+=1){
			if(i==0){
			
				cout<<x<<endl;
				c++;
				if(c>=n)break;
			}
				
			else{
				cout<<x-i<<endl;
				c++;
				if(c>=n)break;
				cout<<x+i<<endl;
				c++;
				if(c>=n)break;
			}
		}
	}
	x=(m+1)/2;
	for(j=0;j<n%m;j++){
		if(j==0)
			cout<<x<<endl;
		else if(j&1)
			cout<<x-j<<endl;
		else
			cout<<x+j<<endl;
	}}
	return 0;
}