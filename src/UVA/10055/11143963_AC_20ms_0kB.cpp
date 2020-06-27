#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
   
    long long int n,i,j,a,b; 
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        if(a > b)
            printf("%lld\n", a - b);
        else
            printf("%lld\n", b - a);
    }

}