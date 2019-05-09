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

    ll n, h, m;

    cin >> n >> h >> m;

    ll arr[n + 1];

    for(ll i = 1; i <= n; i++)
        arr[i] = h;

    for(ll i = 0; i < m; i++){

        ll l, r, x;
        cin >> l >> r >> x;

        for(ll j = l; j <= r; j++){
            arr[j] = min(arr[j], x);
        }
    }


    ll ans = 0;
    for(ll i = 1; i <=n; i++){
        ans += arr[i] * arr[i];
    }

    pf1(ans);

    return 0;
}
