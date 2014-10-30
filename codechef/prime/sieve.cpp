#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
#define MAX 100
typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
bool isprime[MAX+1];
void sieve()
{
	int i,j;
	
	isprime[0]=isprime[1]=true;			//here true means that it is not a prime
	for(i=2;i*i<=MAX;i++)
		{
			if(!isprime[i]){
				for(j=i*i;j<=MAX;j+=i)
				isprime[j]=true;
			}
		}
			

}
int main(){ _
	int i;
	sieve();
	for(i=0;i<=MAX;i++)
		if(!isprime[i])
			cout<<i<<" ";
	return 0;
}
