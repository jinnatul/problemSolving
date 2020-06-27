#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
int lcm(int a, int b) { return (a*b)/gcd(a,b); }

int main()
{
   int a, b, ck=1,i;
   scanf ( "%d %d", &a, &b );

   ck = (a*b)/2;
   
    printf ( "%d\n", ck );
}