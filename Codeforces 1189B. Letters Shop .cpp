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
 
vector <ll> vc[mx];
 
int main()
{
 
    ll k, num, prime, m, tc, t = 1;
 
    sc1(num);
 
    string arr;
    cin >> arr;
 
    for(ll i = 0; i < num; i++){
        vc[arr[i] - 'a'].push_back(i);
    }
 
    sc1(tc);
 
    while (tc--){
 
        string str;
        cin >> str;
 
        ll save[30] = {};
 
        ll ans = 0;
        for(ll i = 0; i < str.size(); i++){
            save[str[i] - 'a']++;
        }
 
        for(ll i = 0; i < 26; i++){
            if(save[i]){
                ans = max(ans, vc[i][save[i] - 1]);
            }
        }
 
        cout << ans + 1 << endl;
    }
}
