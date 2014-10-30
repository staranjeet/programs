#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ _
	int n,i,a,b,j;
	cin>>n;
	if(n==0)
		cout<<4<<endl;
	else if(n==1)
		{
			cin>>a>>b;
			cout<<3<<endl;
	
		}
	
	else
	{
		vector<int>x,y;
	map<int,vector<int> >m;
			for(i=0;i<n;i++){
		cin>>x[i]>>y[i];
		m[x[i]].push_back(y[i]);
		sort(m[x[i]].begin(),m[x[i]].end());
		/*x.push_back(a);
		y.push_back(b);*/
	}
		
				int x1,y1,x2,y2,xc,yc,x3,y3,xd,yd,x4,y4,x5,x6,y5,y6;
		bool print=false;
		int minsquares=4;
		int abovetempsquares=4;
		int belowtempsquares=4;
		vector<int>::iterator it;
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++)
		{
			x1=x[i];y1=y[i];
			x2=x[j];y2=y[j];
	
  			x3 = x1 - (y2 - y1);y3 = y1 + (x2 - x1);
  			x4 = x2 + (y1 - y2);y4 = y2 - (x1 - x2);
 			x5 = x1 + (y2 - y1);y5 = y1 - (x2 - x1);
			x6 = x2 - (y1 - y2);y6 = y2 + (x1 - x2);
			/*cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl<<" next ";
			cout<<x5<<" "<<y5<<" "<<x6<<" "<<y4<<endl;*/
			vector<int> checky3=m[x3];
			vector<int> checky4=m[x4];		
				//find if y3 is there or not
			bool foundy3=false,foundy4=false;
			foundy3=binary_search(checky3.begin(),checky3.end(),y3);
			foundy4=binary_search(checky4.begin(),checky4.end(),y4);
			/*abovetempsquares=4;
			for(it=checky3.begin();it!=checky3.end();it++){
				if(*it==y3){foundy3=true;break;}
			}
			for(it=checky4.begin();it!=checky4.end();it++){
				if(*it==y4){foundy4=true;break;}
			}*/
			if(foundy3==true && foundy4==true){
			cout<<0<<endl;			//there exists a square
			print=true;				//print the value 0
			break;
			}					//both points are found
			//hence a square exits
			if((foundy3==true && foundy4==false)||(foundy3==false && foundy4==true)){
				abovetempsquares=1;
			}	//only one point is found
			if(foundy3==false && foundy4==false){
				abovetempsquares=2;
			}	//both points are not found

			//checking for down side 
			if(print==false)
			{
				vector<int> checky5=m[x5];
				vector<int> checky6=m[x6];		
				//find if y5 is there or not
				bool foundy5=false,foundy6=false;
				belowtempsquares=4;
				foundy5=binary_search(checky5.begin(),checky5.end(),y5);
				foundy6=binary_search(checky6.begin(),checky6.end(),y6);
			/*for(it=checky5.begin();it!=checky5.end();it++){
				if(*it==y5){foundy5=true;break;}
			}
			for(it=checky6.begin();it!=checky6.end();it++){
				if(*it==y6){foundy6=true;break;}
			}*/
			if(foundy5==true && foundy6==true){
			cout<<0<<endl;		// there exists a square
			print=true;
			break;
			}	//both points are found
			if((foundy5==true && foundy6==false)||(foundy5==false && foundy6==true)){
				belowtempsquares=1;
			}	//only one point is found
			if(foundy5==false && foundy6==false){
				belowtempsquares=2;
			}	//both points are not found
			}
			
			if(abovetempsquares<belowtempsquares)
			{
				if(abovetempsquares<minsquares)minsquares=abovetempsquares;
			}
			else if(belowtempsquares<minsquares)minsquares=belowtempsquares;
		}	// j ends
		if(print==true)break;
	}	// i ends
	if(print==false){
		cout<<minsquares<<endl;
	}
	}
	
	return 0;
}
