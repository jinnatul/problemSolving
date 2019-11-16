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

#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define size1 200005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc2(num, m);

    ll arr[num], presum[num + 1];

    for (ll i = 0; i < num; ++i) {
        sc1(arr[i]);
    }
    sort(arr, arr + num);

    for (ll i = 0; i < num; ++i) {
        if(i == 0) presum[0] = arr[0];
        else presum[i] = presum[i - 1] + arr[i];
    }

    vll vc;
    for (ll i = 0; i < num; ++i) {
        if(i < m) vc.pb(presum[i]);
        else vc.pb(presum[i] + vc[i - m]);
    }

    vpnt(vc);
}
 
 
 
 OR
 
 
 
 int main() {
 
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
 
    ll m, tc, num, t = 1;
 
    sc2(num, m);
 
    ll arr[num], presum[num + 1];
 
    for (ll i = 0; i < num; ++i) {
        sc1(arr[i]);
    }
    sort(arr, arr + num);
 
    ll ans = 0;
    for (ll i = 0; i < num; ++i) {
        if(i >= m) arr[i] += arr[i - m];
        ans += arr[i];
        cout << ans << (i + 1 < num ? ' ' : '\n');
    }
}
