/*
TC:O(V+E)
SC:O()
*/
#include "bits/stdc++.h"
using namespace std;
vector<list <int> >v(4);
void addEdge(int src,int des){
	v[src].push_back(des);
}
void printGraph(){
	int i;
	list<int>::iterator it;
	for(i=0;i<v.size();i++){
		cout<<i<<" : ";
		for(it=v[i].begin();it!=v[i].end();it++)
			cout<<*it<<"->";
		cout<<endl;
	}
}
int main(){
	addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);
	printGraph();
	return 0;
}