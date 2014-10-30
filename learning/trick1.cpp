/*
this program is written to learn the trcik of taking input with scanf using some 
regular expression type trick
the input is in the following format
2
0.125...
0.236523...

i.e the input always contains ... dot at the end and the number of digits can be any
*/
#include <cstdio>
char a[100];		// to store the string plus global arrays save memory
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{

		scanf("0.%[0-9]...",a);
		printf("%s\n",a);
	}
	return 0;
}