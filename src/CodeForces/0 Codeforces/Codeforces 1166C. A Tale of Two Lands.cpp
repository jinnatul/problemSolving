#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105

vector <ll> vc;

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    sc1(num);

    for(ll i = 0; i < num; i++){
       ll x;
       sc1(x);
       vc.push_back(abs(x));
    }

    sort(vc.begin(), vc.end());

    ll ans = 0;
    for(ll i = 0; i < num; i++){
        ll pos = upper_bound(vc.begin(), vc.end(), vc[i] * 2) - vc.begin();
        pos--;
        ans += abs(i - pos);
    }

    pf1(ans);

    return 0;
}
