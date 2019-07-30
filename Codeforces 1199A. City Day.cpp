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
 
    sc2(num, m);
    sc1(tc);
 
    ll arr[num + 5];
 
    for(ll i = 1; i <= num; i++)
        sc1(arr[i]);
 
 
    for(ll i = 1; i <= num; i++){
 
        bool ck = true;
        for(ll j = max(i - m, (ll)1); j < i; j++) {
            if(arr[j] <= arr[i]) ck = false;
        }
 
        for(ll j = i + 1; j <= min(i + tc, num); j++) {
            if(arr[j] <= arr[i]) ck = false;
        }
 
        if(ck) return cout << i << endl,0;
    }
 
}
