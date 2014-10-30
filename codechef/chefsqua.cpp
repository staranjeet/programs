#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define FOR(i,n) for( i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define get getchar_unlocked

int g(){
	int n=0,s=1;
	char p=get();
	if(p=='-')s=-1,p=get();
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')
		s=-1,p=get();
	while(p>='0' && p<='9'){
		n=(n<<3)+(n<<1)+p-'0';
		p=get();
	}
	return (n*s);
}
int x[2010],y[2010];

int main(){ 
	int n,i,a,b,j;
	n=g();
	
	if(n<3){
		
		FOR(i,n){
			x[i]=g();y[i]=g();
		}
			
		printf("%d\n",4-n);

	}	
	else
	{
		
		vector<pair<int,int> > p;
		FOR(i,n){
			x[i]=g();y[i]=g();
			p.push_back(make_pair(x[i],y[i]));
		}
		sort(p.begin(),p.end());
		int x1,y1,x2,y2,xc,yc,x3,y3,xd,yd,x4,y4,x5,x6,y5,y6;
		bool print=false;
		int minsquares=4;
		int abovetempsquares=4;
		int belowtempsquares=4;
		for(i=0;i<n;i++){		
		for(j=i+1;j<n;j++)
		{
			x1=x[i];y1=y[i];
			x2=x[j];y2=y[j];
	
  			x3 = x1 - (y2 - y1);y3 = y1 + (x2 - x1);
  			x4 = x2 + (y1 - y2);y4 = y2 - (x1 - x2);
 			x5 = x1 + (y2 - y1);y5 = y1 - (x2 - x1);
			x6 = x2 - (y1 - y2);y6 = y2 + (x1 - x2);
			pair<int,int> p3= make_pair(x3,y3);
			pair<int,int> p4= make_pair(x4,y4);
			pair<int,int> p5= make_pair(x5,y5);
			pair<int,int> p6= make_pair(x6,y6);
			
			bool foundy3=false,foundy4=false;
			foundy3=binary_search(p.begin(),p.end(),p3);
			foundy4=binary_search(p.begin(),p.end(),p4);
			
			if(foundy3==true && foundy4==true){
			printf("0\n");		//there exists a square
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
				//find if y5 is there or not
				bool foundy5=false,foundy6=false;
				belowtempsquares=4;
				foundy5=binary_search(p.begin(),p.end(),p5);
				foundy6=binary_search(p.begin(),p.end(),p6);
			
			if(foundy5==true && foundy6==true){
			printf("0\n");		// there exists a square
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
		printf("%d\n",minsquares);
	}	//if end

	}//else end
	return 0;
}
