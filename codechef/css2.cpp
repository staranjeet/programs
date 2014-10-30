#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,id,attr,val,pri,i;
	cin>>n>>m;
	map< pair<int,int> , int> idi;
	map< pair<int,int> , int> pr;
	pair <int,int > temp;
	for(i=0;i<n;i++){
		cin>>id>>attr>>val>>pri;
		temp=make_pair(id,attr);
		if(idi[temp]==0){
			idi[temp]=val;
		pr[temp]=pri;
		}
		else if(pr[temp]<=pri){
			idi[temp]=val;
		pr[temp]=pri;
		}
		
	}
	while(m--){
		cin>>id>>attr;
		temp=make_pair(id,attr);
		cout<<idi[temp]<<endl;
	}
	return 0;
}