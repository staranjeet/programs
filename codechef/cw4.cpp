#include <stdio.h>
#include <string.h>
#include "bits/stdc++.h"
using namespace std;
// A utility function to find factorial of n
int fact(int n)
{
    return (n <= 1)? 1 :n * fact(n-1);
}
 
// A utility function to count smaller characters on right
// of arr[low]
int findSmallerInRight(string str, int low, int high)
{
    int countRight = 0, i;
 
    for (i = low+1; i <= high; ++i)
        if (str[i] < str[low])
            ++countRight;
 
    return countRight;
}
 
// A function to find rank of a string in all permutations
// of characters
int findRank (string str)
{
    int len = str.size();
    int mul = fact(len);
    int temp=mul;
    int rank = 1;
    int countRight;
 
    int i;
    for (i = 0; i < len; ++i)
    {
        mul /= len - i;
 
        // count number of chars smaller than str[i]
        // fron str[i+1] to str[len-1]
        countRight = findSmallerInRight(str, i, len-1);
 
        rank += countRight * mul ;
    }
 
    return temp-rank;
}
 
// Driver program to test above function
int main()
{
    /*char str[] = "string";
    printf ("%d", findRank(str));*/
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int rank=findRank(s);
        
        /*cout<<rank<<endl;*/
        string converted = "";
        // Repeatedly divide the number by 26 and convert the
        // remainder into the appropriate letter.
        while (rank >= 0)
        {
            int remainder = rank % 26;
            converted = (char)(remainder + 'A') + converted;
            rank = (rank / 26) - 1;
        }
        cout<<converted<<endl;
    }
    return 0;
}