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

bool possible(ll arr[], ll num, ll m, ll mid) {
    ll lastVal = arr[0], cnt = 1;

    for (ll i = 0; i < num; ++i) {
        if(arr[i] - lastVal >= mid) {
            lastVal = arr[i];
            cnt++;
        }
        if(cnt == m) return true;
    }
    return false;
}

ll call(ll arr[], ll num, ll m) {
    ll lw = 0, hi = arr[num - 1], ans = 0;

    while (lw <= hi) {
        ll mid = (lw + hi)/2;

        if(possible(arr, num, m, mid)) {
            ans = max(ans, mid);
            lw = mid + 1;
        }
        else hi = mid - 1;
    }
    return ans;
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, m, num, tc, t = 1;

    sc1(tc);
    while (tc--) {
        sc2(num, m);
        ll arr[num];

        for (ll i = 0; i < num; ++i) {
            sc1(arr[i]);
        }
        sort(arr, arr + num);

        cout << call(arr, num, m) << endl;
    }
}
