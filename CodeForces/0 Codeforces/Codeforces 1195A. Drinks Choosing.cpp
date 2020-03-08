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
 
#define size1
#define pb push_back
 
ll arr[mx], save[mx];
 
int main()
{
 
    ll k, num, prime, m, tc, t = 1;
 
    sc2(num, m);
 
    for(ll i = 0; i < num; i++){
        cin >> arr[i];
        save[arr[i]]++;
    }
 
    ll setnum = ceil((double)num / 2);
 
    ll ans = 0, cnt = 0, pos = 0, extcnt = 0;
 
    for(ll i = 1; i <= m; i++){
 
        while (save[i] > 1 && setnum > 0){
 
            ans += 2;
            save[i] -= 2;
            setnum--;
        }
    }
 
    for(ll i = 1; i <= m; i++){
 
        while (save[i] > 0 && setnum > 0){
            ans ++;
            save[i] --;
            setnum--;
        }
    }
 
    cout << ans << endl;
}



OR



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
 
#define size1
#define pb push_back
 
ll arr[mx], save[mx];
 
int main()
{
 
    ll k, num, prime, m, tc, t = 1;
 
    sc2(num, m);
 
    for(ll i = 0; i < num; i++){
        cin >> arr[i];
        save[arr[i]] ^= 1;
    }
 
    ll odd = 0;
    for(ll i = 1; i <= m; i++){
       if(save[i] & 1) odd++;
    }
    
    cout << num - odd / 2 << endl;
    
}
