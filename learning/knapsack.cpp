#include "bits/stdc++.h"
using namespace std;
int knapsack(int W,int cost[],int weight[],int n)
{
	if(n==0 || W==0)return 0;
	if(weight[n-1]>W)
		return knapsack(W,cost,weight,n-1);
	else
		return max(cost[n-1]+knapsack(W-weight[n-1],cost,weight,n-1),knapsack(W,cost,weight,n-1));
}
int main()
{
	int n,k;
	int cost[n],weight[n];
	for(i=0;i<n;i++)
		cin>>cost[i]>>weight[i];
	cout<<knapack(k,cost,weight,n);
	return 0;
}