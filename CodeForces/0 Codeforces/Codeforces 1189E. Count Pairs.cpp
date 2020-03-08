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

ll apow4(ll num, ll prime)
{
    return (((num * num) % prime) * ((num * num) % prime)) % prime;
}

map <ll, ll> mp;

int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc2(num, prime);
    sc1(m);

    ll ans = 0;
    for(ll i = 0; i < num; i++){
        ll x;
        sc1(x);
        ll value = (apow4(x, prime) - (m * x) % prime + prime) % prime;
        //cout << value << " " << mp[value] << endl;
        ans += mp[value];
        mp[value]++;
    }

    pf1(ans);

}
