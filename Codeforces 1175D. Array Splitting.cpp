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

#define size1 998244353
#define pb push_back

ll save[mx];

int main()
{

    ll m, tc, num, t = 1;

    sc2(num, m);

    ll arr[num];

    ll ans = 0;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }

    vector <ll> vc;

    ll sum = 0;
    for(ll i = num - 1; i >= 0; i--){
        sum += arr[i];
        if(i > 0) vc.push_back(sum);
    }

    //cout << "sum : " << sum << endl;
    sort(vc.begin(), vc.end(), greater<ll>() );

    for(ll i = 0; i < m - 1; i++){
        sum += vc[i];
    }

    pf1(sum);
}
