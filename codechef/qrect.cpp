#include "bits/stdc++.h"
using namespace std;
int main()
{
	char ch;int a[4];
	scanf("%c",&ch);

	if(ch=='Q')
	{
		for(int i=0;i<4;i++)
			scanf("%d",&a[i]);
	}
	if(ch=='D')
	{
		
			scanf("%d",&a[0]);
	}
	for(int i=0;i<4;i++)
		cout<<a[i]<<" ";
}