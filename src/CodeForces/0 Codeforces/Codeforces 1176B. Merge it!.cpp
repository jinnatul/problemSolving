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

    sc1(tc);

    while (tc--){
        sc1(num);

        ll x, mod0 = 0, mod1 = 0, mod2 = 0;
        for(ll i = 0; i < num; i++){
            sc1(x);
            if(x % 3 == 0) mod0++;
            else if(x % 3 == 1) mod1++;
            else mod2++;
        }

        ll ans = mod0;

        ans += min(mod1, mod2);

        if(mod1 > mod2){
            mod1 -= mod2;
            ans += mod1 / 3;
        }
        else{
            mod2 -= mod1;
            ans += mod2 / 3;
        }

        pf1(ans);
    }

    return 0;
}
