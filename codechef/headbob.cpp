#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ _
	int t,n,i;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		/*int count[3]={0};*/
		int flag=0;
		cin>>s;
		size_t found;
		found=s.find('I');
		if(found!=string::npos)
			cout<<"INDIAN"<<endl;
		else{
			found=s.find('Y');
			if(found!=string::npos)
				cout<<"NOT INDIAN"<<endl;
			else
				cout<<"NOT SURE"<<endl;

		}
		/*for(i=0;s[i];i++){
			if(s[i]=='I'){flag=1;break;}
			if(s[i]=='Y'){flag=2;break;}
			/*if(s[i]=='Y')count[2]++;
		}
		if(flag==1)
			
		else if(flag==2)
			
		else*/
			
	
	}

	return 0;
}
