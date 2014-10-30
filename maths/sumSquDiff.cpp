/*
sumSquareDiff.cpp
Problem 6: Sum Square Difference
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=100,ans;
	ans=(n*(n+1)/2)*((n*(n+1))/2-(2*n+1)/3);
	cout<<ans;
	return 0;
}