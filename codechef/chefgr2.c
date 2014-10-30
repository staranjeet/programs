#include <stdio.h>
int main(){
		int t,n,m,s=0,i,x;
		scanf("%d",&t);
		while(t--){
			scanf("%d%d",&n,&m);
			s=0;
			for(i=0;i<n;i++)
			{
				scanf("%d",&x);
				s+=x;
			}
			if((s+m)%n==0)
				puts("Yes");
			else
				puts("No");
		}
	 	return 0;
}