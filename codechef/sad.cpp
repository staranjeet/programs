#include "bits/stdc++.h"
using namespace std;
#define get getchar_unlocked
inline int checkmaxcol(int a[101][101],int r,int c,int col,int item)
{
	int i;
	for(i=0;i<r;i++)
		if(a[i][col]>item)
			return 0;
	return 1;
}
int scan_f()
{
	char p=get();
	int n=0,s=1;
	if(p=='-')s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')s=-1,p=get();
	while(p>='0' && p<='9')
	{
		n=(n<<3)+(n<<1)+p-'0';
		p=get();
	}
	return (n*s);
}
int main()
{
	int r,c,i,j,min,k,printflag=0,t,col,flag=0;
	r=scan_f();c=scan_f();
	/*scanf("%d%d",&r,&c);*/
	int a[101][101];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			a[i][j]=scan_f();
			/*scanf("%d",&a[i][j]);*/
		min=a[r-1][c-1];
		t=0;
		for(i=0;i<r;i++)
		{
			min=a[i][0];
			for(j=0;j<c;j++)
			{
				if(a[i][j]<min){min=a[i][j];col=j;}
				
			}
			for(j=0;j<c;j++)
			{
				if(a[i][j]==min)
				{
					int hi=1;
					/*if(checkmaxcol(a,r,c,j,min)){printf("%d\n",min);printflag=1;flag=1;break;}*/
					for(k=0;k<r;k++)
					{
						if(a[k][j]>min){hi=0;break;}
					}
					if(hi){printf("%d\n",min);printflag=1;flag=1;break;}

				}
			}
			if(flag==1)break;
			
		}
		
		if(!printflag)
			printf("GUESS\n");
	return 0;
}