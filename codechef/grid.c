#include<stdio.h>
int main(){
	char pat[1001][1001];
	int i,j,n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%c",&pat[i][j]);
		int bo[1001][1001]={0};
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=0;j--)
			{
				if(pat[i][j]=='#')break;
				bo[i][j]=1;
			}
		}
		for(i=n-1;i>=0;i--){
			for(j=0;j<n;j++){
				if(pat[i][j]=='#')
					break;
				bo[i][j]=1;
			}
		}
		int ans=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				if(bo[i][j]==1)ans++;
		}
		printf("%d\n",ans);

	}
	return 0;
}