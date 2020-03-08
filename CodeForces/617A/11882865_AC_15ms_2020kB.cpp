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
    int n,i,j,k,ck=0;
    cin>>n;
    
    ck+=n/5;
    n%=5;
    ck+=n/4;
    n%=4;
    ck+=n/3;
    n%=3;
    ck+=n/2;
    n%=2;
    ck+=n/1;
    n%=1;

    cout<<ck<<endl;
}

