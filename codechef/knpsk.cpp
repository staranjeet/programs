#include "bits/stdc++.h"
using namespace std; 
int knapsack(int W,int weight[],int cost[],int n)
{
	if(!W || !n)
		return 0;
	if(weight[n-1]>W)
		return knapsack(W,weight,cost,n-1);
	else
		return max(cost[n-1]+knapsack(W-weight[n-1],weight,cost,n-1),knapsack(W,weight,cost,n-1));
}
int main()
{
	int n,s=0,i;
	scanf("%d",&n);
	int weight[n],cost[n];
	for(i=0;i<n;i++)
		{
			scanf("%d%d",&weight[i],&cost[i]);s+=weight[i];
		}
	for(i=1;i<s;i++)
	{
		cout<<knapsack(s,weight,cost,i)<<endl;
	}

	return 0;
}