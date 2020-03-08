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

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 100005
#define pb push_back

ll m, tc, num, t = 1,temp_sum, total;
ll arr[mx];

ll BS(ll lw, ll hi)
{
    ll ans = 0;
    while (lw <= hi){
       ll mid = (lw + hi) >> 1;
       ll cnt = 0, last = 1;

       for(ll i = 1; i <= num; i++){
           if(i == 1){
               cnt++;
               last = i;
           }
           else{
               if(arr[i] - arr[last] + 1 > mid){
                   cnt++;
                   last = i;
               }
           }
       }

       if(cnt <= m){
           ans = mid;
           hi = mid - 1;
       }
       else{
           lw = mid + 1;
       }
    }

    return ans;
}

int main()
{

    sc1(tc);

    while (tc--){

        sc2(num, m);

        for(ll i = 1; i <= num; i++) {
            sc1(arr[i]);
        }

        ll lw = 1, hi = 1e9 + 1, ans = 0;

        ans = BS(lw, hi);

        pf1(ans);
    }
}
