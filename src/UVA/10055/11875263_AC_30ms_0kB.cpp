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
    long long int n,i,a,b,t,j,aa,ck=0;
     
     while(scanf("%lld %lld", &a, &b) != EOF){
 
     if(a<b){
        ck = b-a;
        printf("%lld\n", ck);
     }
     else{
        ck = (abs(a-b));
         printf("%lld\n", ck);
     }

    }
}

