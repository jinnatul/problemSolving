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
 
 
int main()
{
 
    ll m, tc, num, t = 1;
 
    sc1(tc);
 
    while (tc--){
        sc1(num);
 
        ll arr[num];
        for(ll i = 0; i < num; i++)
            sc1(arr[i]);
 
        sort(arr, arr + num);
 
        ll last = arr[num - 1];
        ll last2 = arr[num - 2];
 
        ll high = min(last, last2);
 
        ll ans = 0;
        for(ll i = 0; i < num - 2; i++){
            ans++;
            if(ans < high) continue;
            else {
                ans--;
                break;
            }
        }
 
        pf1(ans);
    }
 
}