/***
  * Name : Jinnat Morol
  * Date : 03/12/17
***/


#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
    long long int a, b;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        if(a > b)
            printf("%lld\n", a - b);
        else
            printf("%lld\n", b - a);
    }

}



