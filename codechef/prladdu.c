#include <stdio.h>
#include <stdlib.h>
#define M 100005
int main(){
long long int t,a[M],i,n,df,co;
scanf("%lld",&t);
while(t--){
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",(a+i));
	df=a[0];co=0;
	for(i=1;i<n;i++){
		co+=labs(df);
		df+=a[i];
	}
	printf("%lld\n",co);
}
return 0;
}