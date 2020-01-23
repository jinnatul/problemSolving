#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;
typedef unsigned long long ull;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7

#define size1 1505

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

inline bool cmp(pll a,pll b){ if(a.ff == b.ff)return a.ss < b.ss; return a.ff > b.ff; }

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, m, num, tc, t = 1;
    cin >> tc;

    while (tc--) {
        sc1(num);
        vpll vp;
        for (ll i = 0; i < num; ++i) {
            ll x, y;
            sc2(x, y);
            vp.pb(mp(x, y));
        }

        sort(vp.begin(), vp.end());

        if(num == 1) {
            cout << "YES" << endl;
            for (ll i = 0; i < vp[0].ff; ++i)
                cout << "R";
            for (ll i = 0; i < vp[0].ss; ++i)
                cout << "U";

            cout << endl;
            continue;
        }

        bool ok = false;
        for (ll i = 1; i < num; ++i) {
            if(vp[i].ss < vp[i - 1].ss) {
                ok = true;
                break;
            }
        }
        if(ok == true) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        ll xSide = 0, ySide = 0, preX = vp[0].ff, preY = vp[0].ss, pos = 1;

        for (ll i = 0; i < vp[0].ff; ++i)
            cout << "R";
        for (ll i = 0; i < vp[0].ss; ++i)
            cout << "U";

        while (pos < num) {

            xSide = vp[pos].ff;
            ll difx = xSide - preX;
            ySide = vp[pos].ss;
            ll dify = ySide - preY;
            preX = xSide;
            preY = ySide;

            for (ll i = 0; i < difx; ++i)
                cout << "R";
            for (ll i = 0; i < dify; ++i)
                cout << "U";
            pos++;
        }
        cout << endl;
    }
}
