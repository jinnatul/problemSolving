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
 
    string arr[num];
    for(ll i = 0; i < num; i++) {
       cin >> arr[i];
    }
 
    ll aa[m];
    for(ll j = 0; j < m; j++){
        cin >> aa[j];
    }
 
    ll ans = 0;
    for(ll i = 0; i < m; i++){
        map <char, ll> mp;
        map <char, ll>::iterator it;
        ll cnt = 0;
        for(ll j = 0; j < num; j++){
            mp[arr[j][i]]++;
        }
 
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->second > cnt) cnt = it->second;
        }
 
        ans += cnt * aa[i];
    }
 
    pf1(ans);
}
