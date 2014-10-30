#include <stdio.h>
#include <string.h>
int main()
{
	int n,q,i,j;
	char ext[100][11],media[100][51],file[100][51];
	scanf("%d%d",&n,&q);
	for(i=0;i<n;i++)
		scanf("%s%s",ext[i],media[i]);
	for(i=0;i<q;i++)
	{
		scanf("%s",file[i]);
		char *p=strrchr(file[i],'.');
		if(p==NULL)
			puts("unknown");
		else
		{
			j=0;
			while(j<n && strcmp(&p[1],ext[j])!=0)
				j++;
			if(j==n)
				puts("unknown");
			else
				printf("%s\n",media[j]);
		}
	}
	return 0;
}