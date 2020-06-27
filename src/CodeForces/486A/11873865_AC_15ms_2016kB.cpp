#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

//int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
//int lcm(int a, int b) { return (a*b)/gcd(a,b); }

int main()
{
   long long int a, b, ck=0,i,j,sum=0,sum1=0;
   scanf("%lld",&a);

   if(a%2==0){
     ck = a/2;
    printf("%lld\n", ck);
   }
   else{
    ck = (((a/2)+1)*(-1));
     printf("%lld\n", ck);
   }
  
}