#include "bits/stdc++.h"
using namespace std;
int rand_base(int p,int a)
{
	if(((int)pow(a,p)-a)%p==0)return 1;			/* a^p === a mod p */
	return 0;
}
int method2(int p,int a)
{
	if(((int)pow(a,p-1)-1)%p==0)			/*   a^(p-1) === 1 mod p */
		return 1;
	return 0;
}
int check_prime(int n)
{
	return method2(n,2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",check_prime(n));
	return 0;
}