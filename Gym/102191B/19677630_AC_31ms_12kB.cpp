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

    cin >> n;

    ll mi = INT32_MAX;
    for(ll i = 0; i < n; i++){
        ll x;
        sc1(x);
        mi = min(mi, x);
    }

    ll arr[10];
    ll mi2 = INT32_MAX;

    for(ll i = 0; i < 10; i++){
        sc1(arr[i]);
        mi2 = min(mi2, arr[i]);
    }

    //cout << mi << " " << mi2 << endl;

    if(mi2 <= mi){
        cout << 10 << endl;
    }
    else{
        pf1(mi);
    }

    return 0;
}