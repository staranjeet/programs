#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string s;
		cin>>s;
		int c=0,count=0,i,days=0;
		for(i=0;s[i];i++)
		{
			if(s[i]=='.')
			{
				while(s[i]=='.')
				{
					count++;i++;
				}
			}
			if(count>c)
			{
				c=count;days++;count=0;
			}
			count=0;
		}
		cout<<days<<endl;
	}
	return 0;
}