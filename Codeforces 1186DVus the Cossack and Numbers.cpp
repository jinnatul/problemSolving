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

    double arr[size1];

    ll ans[size1];

    ll cnt = 0;
    for(ll i = 0; i < tc; i++){
        cin >> arr[i];
        ans[i] = ceil(arr[i]);
        cnt += ans[i];
    }

    for(ll i = 0; cnt > 0; i++){
       if(floor(arr[i]) - (ans[i] - 1) < 1){
           ans[i] -= 1;
           cnt--;
       }

    }

    for(ll i = 0; i < tc; i++){
        cout << ans[i] << endl;
    }

    return 0;
}
