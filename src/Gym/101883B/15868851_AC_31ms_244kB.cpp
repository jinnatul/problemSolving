#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    ll n,m,k,w,ck=0,i;

    scanf("%lld %lld",&n,&m);

    ck = __gcd(n,m);
    w = (n*m);
    cout<<w/ck<<endl;

}
