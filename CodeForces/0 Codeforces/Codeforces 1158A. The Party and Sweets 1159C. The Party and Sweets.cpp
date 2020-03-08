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

#define size1 300005

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, m;
    sc2(n, m);

    ll boy[n], girl[m], ans = 0;

    for(ll i = 0; i < n; i++){
        sc1(boy[i]);
        ans += boy[i] * m;
    }

    for(ll i = 0; i < m; i++){
        sc1(girl[i]);
    }

    sort(boy, boy + n);
    sort(girl, girl + m);

    if(girl[0] < boy[n - 1]) return cout << "-1" << endl,0;

    for(ll i = 1; i < m; i++){
       ans += girl[i] - boy[n - 1];
    }

    if(girl[0] == boy[n - 1]) ans += girl[0] - boy[n - 1];
    else ans += girl[0] - boy[n - 2];

    pf1(ans);

    return 0;
}
