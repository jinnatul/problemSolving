#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 998244353
#define pb push_back

long long first[1010000], last[1010000];

int main()
{

    ll k, prime, m, tc, num, t = 4;

    string arr;
    cin >> arr;
    ll ln = arr.size();

    ll cnt = 0;
    for(ll i = 1; i <= ln - 1; i++){
        if(arr[i] == 'v' && arr[i - 1] == 'v') cnt++;
        first[i] = cnt;
    }

    cnt = 0;
    for(ll i = ln - 1; i > 0; i--){
        if(arr[i] == 'v' && arr[i + 1] == 'v') cnt++;
        last[i] = cnt;
    }

    ll ans = 0;
    for(ll i = 0; i < ln; i++){
        if(arr[i] == 'o'){
            ans += first[i - 1] * last[i + 1];
        }

    }

    cout << ans << endl;
}
