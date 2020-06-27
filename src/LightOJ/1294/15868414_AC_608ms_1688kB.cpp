#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n,m,a,b,i,j,ck=0;

    cin>>n;

    for(i=1; i<=n; i++){
        cin>>a>>b;
        ck = (a/2)*b;

        printf("Case %lld: %lld\n", i, ck);
        ck =0;
    }

}
