#include <stdio.h> 
#include <string.h>
#define get getchar_unlocked
int scan_f()
{
	char p=get();
	int n=0,s=1;
	if(p=='-')s=-1;
	while((p<'0' || p>'9') && p!=EOF && p!='-')
		p=get();
	if(p=='-')
		s=-1,p=get();
	while(p>='0' && p<='9')
	{
		n=(n<<3)+(n<<1)+p-'0';
		p=get();
	}
	return (n*s);
}
/*using namespace std;*/
int main()
{
	int t,n,m,w,x,y,z,i;
	t=scan_f();
	/*printf("%d",t);*/
	/*scanf("%d",&t);*/
	while(t--)
	{
		n=scan_f();
		m=scan_f();
		/*scanf("%d%d",&n,&m);*/
		int a[2];
		a[0]=0;a[1]=1;
		/*for(i=1;i<=n;i++)
			a[i]=i;*/
		int d[n-1];
		/*for(i=0;i<n-1;i++)
			d[i]=1;*/
		memset(d,0,sizeof(d));
		while(m--)
		{
			w=scan_f();x=scan_f();y=scan_f();z=scan_f();
			/*scanf("%d%d%d%d",&w,&x,&y,&z);*/
			if(w==1)	//add
			{
				d[x-1-1]+=z;
				d[y-1]+=-z;
			}
			else
			{
				d[x-1-1]+=-z;
				d[y-1]+=z;
			}
		}
		int min=a[1],max=a[1],cur=1;
		/*for(i=2;i<=n;i++)
		{
			a[i]=a[i-1]+d[i-2]+1;
			if(a[i]>max)
					max=a[i];
			if(a[i]<min)
					min=a[i];
		}*/
		for(i=2;i<=n;i++)
		{
			cur=cur+d[i-2]+1;
			if(cur>max)
					max=cur;
			if(cur<min)
					min=cur;
		}
			
		/*for(i=1;i<=n;i++)
			{
				
			}
				*/		printf("%d\n",max-min);
	}
	return 0;
}