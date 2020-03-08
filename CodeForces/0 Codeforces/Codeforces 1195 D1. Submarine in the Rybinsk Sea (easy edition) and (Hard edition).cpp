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
#define MOD 998244353
#define PI acos(-1.0)

#define size1 12
#define pb push_back

string arr[mx];
ll cnt[size1];

int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc1(num);

    for(ll i = 1; i <= num; i++){
        cin >> arr[i];
        cnt[arr[i].size()]++;
        reverse(arr[i].begin(), arr[i].end());
    }

    ll ans = 0;

    //After

    for(ll i = 1; i <= num; i++){
        ll ln = arr[i].size();

        for(ll l = 1; l < size1; l++){
            ll current = 0;
            ll mul = 1;

            for(ll x = 1; x <= ln; x++){
                current += (arr[i][x - 1] - '0') * mul;
                mul = (mul * 10) % MOD;

                if(x <= l) mul = (mul * 10) % MOD;
            }
            current %= MOD;
            ans += (current * cnt[l]) % MOD;

            if(ans >= MOD) ans -= MOD;
        }
    }

    //pf1(ans);

    //Before

    for(ll i = 1; i <= num; i++){
        ll ln = arr[i].size();

        for(ll l = 1; l < size1; l++){
            ll current = 0;
            ll mul = 1;

            for(ll x = 1; x <= ln; x++){

                if(x <= l) mul = (mul * 10) % MOD;
                current += (arr[i][x - 1] - '0') * mul;
                mul = (mul * 10) % MOD;
            }

            current %= MOD;
            ans += (current * cnt[l]) % MOD;

            if(ans >= MOD) ans -= MOD;
        }
    }

    pf1(ans);
}
