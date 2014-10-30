#include<stdio.h>
#include <iostream>
using namespace std;
int main(){
	char pat[1001][1001];
	int i,j,n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>pat[i][j];
		int bo[1001][1001]={0};
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=0;j--)
			{
				if(pat[i][j]=='#')break;
				bo[i][j]=1;
			}
		}
		/*for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cout<<bo[i][j]<<" ";
			cout<<endl;
		}*/
		int ans=0;
		for(j=0;j<n;j++){
			for(i=n-1;i>=0;i--)
			{
				if(pat[i][j]=='#')break;
				if(bo[i][j]==1)ans++;
			}
		}
		
		printf("%d\n",ans);

	}
	return 0;
}