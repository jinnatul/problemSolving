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

    ll a, b, c;

    while (1){

        sc2(a, b);
        sc1(c);

        if(a == 0 && b == 0 && c == 0) break;

        ll save[5000];
        memset(save, 0, sizeof(save));

        for(ll i = 0; i < a; i++)
            save[i] = 1;
        for(ll i = a; i < a + b; i++)
            save[i] = 2;
        for(ll i = a + b; i < a + b + c; i++)
            save[i] = 5;

        ll ans = 0;
        for(ll i = 0; i < a + b + c; i++){
            if(ans + 1 < save[i]) break;
            else ans += save[i];
        }

        pf1(ans + 1);
    }

    return 0;
}