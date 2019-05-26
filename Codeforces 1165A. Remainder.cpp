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

    ll n, x, y;
    string arr;

    cin >> n >> x >> y >> arr;

    reverse(arr.begin(), arr.end());

    ll ans = 0;
    for(ll i = 0; i < x; i++){
        if(i == y){
            ans += (arr[i] == '0');
        }
        else{
            ans += (arr[i] == '1');
        }
    }

    pf1(ans);

    return 0;
}
