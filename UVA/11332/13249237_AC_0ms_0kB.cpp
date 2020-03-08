#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
   
   long long  num, remainder=0,digit,a;
    while(scanf("%lld",&num))
    {
        if(num==0)
        {
            break;
        }
        while(num>9)
        {
            remainder = (num%10);
            num = (num/10);
            num = num+remainder;
        }
        printf("%lld\n", num);
    }

}