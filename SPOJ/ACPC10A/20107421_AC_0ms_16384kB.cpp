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

        ll dif1 = b - a;
        ll dif2 = c - b;

        if(dif1 == dif2){
            printf("AP %lld\n", c + dif1);
        }
        else{

            ll mid = c / b;
            printf("GP %lld\n", c * mid);
        }

    }

    return 0;
}