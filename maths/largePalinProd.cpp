#include <bits/stdc++.h>
using namespace std;
bool isPalin(int n){
	char a[7];
	sprintf(a,"%d",n);
	if(a[0]==a[5] && a[1]==a[4] && a[2]==a[3])
		return true;
	return false;
}
int main(){
	int i,j,max=0,temp;
	for(i=999;i>=100;i--){
		for(j=i;j>=100;j--){
			temp=i*j;
			if(isPalin(temp) && temp>max){
				max=temp;
			}	
		}
	}
	cout<<max;
	return 0;
}