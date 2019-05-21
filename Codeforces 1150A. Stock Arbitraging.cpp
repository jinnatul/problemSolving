#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, m, r;

    sc1(n);
    sc2(m, r);

    ll arr[n], brr[m];

    ll mi = INT_MAX, mx = 0;

    for(ll i = 0; i < n; i++){
        sc1(arr[i]);
        mi = min(mi, arr[i]);
    }

    for(ll i = 0; i < m; i++){
        sc1(brr[i]);
        mx = max(mx, brr[i]);
    }

    ll buyCount = r / mi;

    ll ans = mx * buyCount;

    ans -= (buyCount * mi);

    ans += r;

    if(mi < mx){
        pf1(ans);
    }
    else{
        pf1(r);
    }

    return 0;
}
