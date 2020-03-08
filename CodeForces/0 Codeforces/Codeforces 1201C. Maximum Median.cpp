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

const int N=3e5+9;
ll arr[N];

int main()
{

    ll m, tc, num, t = 1;

    sc2(num, m);

    ll sum = 0, mxx = 0;
    for(ll i = 1; i <= num; i++) {
        sc1(arr[i]);
    }

    sort(arr + 1, arr + num + 1);

    ll lw = 1, hi = 2e9+100;
    ll ans = arr[num / 2 + 1];

    while (lw <= hi){
        ll mid = (lw + hi)/2;
        ll need = 0;

        for(ll i = num/2 + 1; i <= num; i++) {
            if (arr[i] < mid) {
                need += mid - arr[i];
            }
        }
            if(need <= m){
                ans = mid;
                lw = mid + 1;
            }
            else{
                hi = mid - 1;
            }
        }

    pf1(ans);

}
