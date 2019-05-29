#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native"
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 998244353

vector <ll> vc;

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll x;
    for(ll i = 0; i < num; i++){
        sc1(x);
        vc.push_back(x * (i + 1) * (num - i));
    }

    ll brr[num];
    for(ll i = 0; i < num; i++){
        sc1(brr[i]);
    }

    sort(vc.rbegin(), vc.rend());
    sort(brr, brr + num);

    ll ans = 0;
    for(ll i = 0; i < num; i++){
        ans = (ans + brr[i] * (vc[i]  % size1)) % size1;
    }

    pf1(ans);

    return 0;
}
