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

    sc1(tc);

    while (tc--){

        sc2(a, b);
        sc1(c);

        ll mx = max(a, b);

        if(mx < c){
            cout << "NO" << endl;
        }
        else{
            ll common = __gcd(a, b);
            if(c % common == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}