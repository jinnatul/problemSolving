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
#define mod 1000000007
#define PI acos(-1.0)
#define size1 1010

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

vpll vp;

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc1(num);

    for (ll i = 0; i < num; ++i) {
        ll x, y;
        sc2(x, y);
        vp.pb(mp(x, y));
    }

    ll preleft = 0, preright = 0, ans = 0;

    //if(preleft > 0 || preright < vp[1].ff) ans++;

    if(num == 1) return cout << 1 << '\n', 0;

    ll last = INT_MIN;
    for (ll i = 0; i < num; ++i) {
        preleft = vp[i].ff - vp[i].ss;
        preright = vp[i].ff + vp[i].ss;

        if(preleft > last) {
            ans++;
            last = vp[i].first;
        }
        else if((i + 1 == num) || preright < vp[i + 1].ff) {
            ans++;
            last = preright;
        }
        else last = vp[i].ff;
    }

    pf1(ans);
}