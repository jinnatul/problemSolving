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


    string arr, brr;

    cin >> arr >> brr;

    ll ln1 = arr.size();
    ll ln2 = brr.size();

    bool cnt1 = 0, cnt2 = 0;

    for(ll i = 0; i < ln2; i++){
        if(arr[i] == '1') cnt1 ^= 1;
    }

    for(ll i = 0; i < ln2; i++){
        if(brr[i] == '1') cnt2 ^= 1;
    }

    ll ans = 0;

    for(ll i = ln2 - 1; i < ln1; i++){
        if(cnt1 == cnt2) ans++;
        if(arr[i + 1] == '1') cnt1 ^= 1;
        if(arr[i + 1 - ln2] == '1') cnt1 ^= 1;
    }
    
    cout << ans << endl;

    return 0;
}
