#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
   long long int n,i,x=0;
    scanf("%lld",&n);
    while(n>=1){
        if(n%2==1){
            x++;
            n--;
        }
        else{
            n/=2;
        }
    }
    printf("%lld\n",x);
}