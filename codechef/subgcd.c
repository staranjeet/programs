#include <stdio.h>
#define MAX 100004
int gcd(int a,int b){
	if(b>a)return gcd(b,a);
	if(a%b==0)return b;
	else 
		return gcd(b,a%b);
}
int a[MAX];
int main(){
	int t,n,i,g;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		g=a[0];
		for(i=1;i<n;i++)
			g=gcd(g,a[i]);
		if(g==1)
			printf("%d\n",n);
		else
			puts("-1");
	}
	return 0;
}