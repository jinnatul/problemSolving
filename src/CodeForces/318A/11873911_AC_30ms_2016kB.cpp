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
   int a, b, c, ck=0,i,j,sum=0,sum1=0;
    long long int odd,n,k;

    scanf("%lld %lld", &n,&k);
 
    if(n%2 == 0)
     odd = n/2;
    else odd = (n/2) + 1;

    if(k<=odd) cout<<(k+(k-1))<<endl;
    else cout<<(k-odd)*2<<endl;

}