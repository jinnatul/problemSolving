#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 12
#define pb push_back


int main()
{

    ll k, prime, m, t = 4;

    ll arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    sort(arr, arr + 3);

    ll ans = 0, dif = 0;
    dif = abs(arr[0] - arr[1]);

    if(dif < arr[3]){
        ans += (arr[3] - dif);
    }

    dif = abs(arr[1] - arr[2]);
    if(dif <= arr[3]){
        ans += (arr[3] - dif);
    }

    pf1(ans);

}
