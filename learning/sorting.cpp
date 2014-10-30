#include "bits/stdc++.h"
using namespace std;
typedef struct {
	int a;
	char s[6];
}my;
bool compare(my aa, my b)
{
	return aa.a<b.a;
}
bool strcompare(my aa,my b)
{
	return (aa.s<b.s);
}
int main()
{
	/*vector <int> a(5);
	for(int i=0;i<5;i++)
		cin>>a[i];
	sort(a.begin(),a.end(),compare);
	for(int i=0;i<5;i++)
		cout<<a[i]<<" ";
*/	
	vector<my> t(3);
	for(int i=0;i<3;i++)
		cin>>t[i].s>>t[i].a;
	sort(t.begin(),t.end(),strcompare);
	for(int i=0;i<3;i++)
		cout<<t[i].a<<" "<<t[i].s<<endl;

	return 0;
}