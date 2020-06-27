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

#define size1
#define pb push_back

ll dp1[mx], dp2[mx];

int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc1(num);

    ll arr[num + 5], brr[num + 5];

    for(ll i = 1; i <= num; i++) sc1(arr[i]);
    for(ll i = 1; i <= num; i++) sc1(brr[i]);

    for(ll i = 1; i <= num; i++){
        dp1[i] = dp2[i - 1] + arr[i];
        dp2[i] = dp1[i - 1] + brr[i];
        dp1[i] = max(dp1[i], dp1[i - 1]);
        dp2[i] = max(dp2[i], dp2[i - 1]);
    }

    ll ans = 0;
    for(ll i = 1; i <= num; i++){
        ans = max(ans, max(dp1[i], dp2[i]));
    }
    
    pf1(ans);
}
