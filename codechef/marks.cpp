#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)

int A[101],B[101],C[101],D[101],E[101],a,b,c,d,e;
int main(){ _
	int n,i,per,x;
	char ch;
	cin>>n;
	while(n--){
		cin>>ch>>x;
		if(ch=='A'){
			A[x]++;a++;
		}
		else if(ch=='B'){
			B[x]++;b++;
		}
		else if(ch=='C'){
			C[x]++;c++;
		}
		else if(ch=='D'){
			D[x]++;d++;
		}
		else if(ch=='E'){
			E[x]++;e++;
		}
	}
	per=a/10;

	bool print=false;
	for(i=0;i<=100;i++)
	if(A[i]>per && A[i]!=0){
		cout<<i<<" ";print=true;
	}
	if(print==false)
	cout<<"Nothing Unusual";			
	cout<<endl;
	per=b/10;print=false;
	
		for(i=0;i<=100;i++)
			if(B[i]>per && B[i]!=0){
				cout<<i<<" ";print=true;}
if(print==false)
	cout<<"Nothing Unusual";
	cout<<endl;
	per=c/10;print=false;
	
		for(i=0;i<=100;i++)
			if(C[i]>per && C[i]!=0){
				cout<<i<<" ";print=true;}
if(print==false)
	cout<<"Nothing Unusual";
	cout<<endl;
	per=d/10;print=false;
	
		for(i=0;i<=100;i++)
			if(D[i]>per && D[i]!=0)
				{cout<<i<<" ";print=true;}
if(print==false)
	cout<<"Nothing Unusual";
	cout<<endl;
	per=e/10;print=false;
	
		for(i=0;i<=100;i++)
			if(E[i]>per && E[i]!=0)
				{cout<<i<<" ";print=true;}
	if(print==false)
		cout<<"Nothing Unusual";
	cout<<endl;

	return 0;
}
