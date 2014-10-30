#include <iostream>
#include <vector>
#include "bits/stdc++.h"
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(4);
	v.push_back(9);
	cout<<v.at(1)<<" "<<v[0];
	/*v.erase();*/				//not working
	
	return 0;
}