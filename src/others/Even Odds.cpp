#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,k;

    scanf("%lld %lld", &n,&k);

    ll odd;

    if(n%2 == 0)
     odd = n/2;
    else odd = (n/2) + 1;

    if(k<=odd) cout<<(k+(k-1))<<endl;
    else cout<<(k-odd)*2<<endl;

    return 0;
}