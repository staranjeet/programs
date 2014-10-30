#include <iostream>
#include <vector>
#include <math.h>
#include <cstdio>
using namespace std;

#define RANGE_SUM 0
#define RANGE_MIN 1
#define RANGE_MAX 2
typedef vector<int> vi;

vi segment_tree;
void init_segment(int N)
{
	//segment tree length is 2*2^(floor(log2N)+1)
	int length= (int)(2*pow(2.0,floor(log((double)N)/log(2.0))+1));
	segment_tree.resize(length,0);
}

void build_segment_tree(int code,int A[],int b,int e,int node)
{
	if(b==e)
	{
		if(code==RANGE_SUM)
			segment_tree[node]=A[b];			//store value of this index
		else
			segment_tree[node]=b;				//store the index
	}
	else
	{
		int leftindex=2*node,rightindex=2*node+1;
		build_segment_tree(code,A,b,(b+e)>>1,leftindex);
		build_segment_tree(code,A,(b+e)/2+1,e,rightindex);
		int lcontent=segment_tree[leftindex],rcontent=segment_tree[rightindex];
		if(code==RANGE_SUM)
			segment_tree[code]=lcontent+rcontent;
		else
		{
			int lvalue=A[lcontent],rvalue=A[rcontent];
			if(code==RANGE_MIN)segment_tree[node]=(lvalue<=rvalue)?lcontent:rcontent;
			else
				segment_tree[node]=(lvalue>=rvalue)?lcontent:rcontent;
		}
	}
}

int query(int code,int A[],int node,int b,int e,int i,int j)
{
	if(i>e || j<b)
		return -1;
	if(i>=b && j<=e)
		return segment_tree[node];
	int p1=query(code,A,node*2,b,(b+e)/2,i,j);
	int p2=query(code,A,node*2+1,(b+e)/2+1,e,i,j);
	if(p1==-1)
		return p2;
	if(p2==-1)
		return p1;
	if(code==RANGE_SUM)return p1+p2;
	else if(code==RANGE_MIN) return (A[p1]<=A[p2])?p1:p2;
	else
		return (A[p1]>=A[p2])?p1:p2;
}

int main()
{
	int a[]={8,7,3,9,5,1,10};
	init_segment(7);
	build_segment_tree(RANGE_MAX,a,0,7-1,1);
	printf("%d\n",a[query(RANGE_MAX,a,1,0,6,0,6)]);
	return 0;
}