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

#define size1 105

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){

        sc1(num);

        vector <ll> vc1(num), vc2;

        for(ll i = 0; i < num; i++){
            sc1(vc1[i]);
        }

        sort(vc1.begin(), vc1.end());

        ll ans = vc1[0] * vc1[num - 1];

        for(ll i = 2; i * i <= ans; i++){
            if(ans % i == 0){
                vc2.push_back(i);
                if(i != ans / i){
                    vc2.push_back(ans / i);
                }
            }
        }

        sort(vc2.begin(), vc2.end());

        if(vc1 == vc2){
            cout << ans << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}
