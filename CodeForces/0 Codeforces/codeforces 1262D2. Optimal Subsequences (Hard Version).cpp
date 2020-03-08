#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> pbds;

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
#define eps 1e-7

#define size1 200005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

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

inline bool cmp(pll a,pll b){ if(a.ff == b.ff)return a.ss < b.ss; return a.ff > b.ff; }

pll x[size1];
pair <ll, pll> query[size1];
ll temp[size1], ans[size1];

pbds op;

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, num, tc, t = 1;

    sc1(num);

    for (ll i = 1; i <= num; ++i) {
        cin >> x[i].ff;
        x[i].ss = i;
        temp[i] = x[i].ff;
    }

    sort(x + 1, x + num + 1, cmp);

    sc1(tc);
    for (ll i = 1; i <= tc; ++i) {
        cin >> query[i].ff >> query[i].ss.ff;
        query[i].ss.ss = i;
    }
    sort(query + 1, query + tc + 1);

    ll id = 0;

    for (ll i = 1; i <= tc; ++i) {
        while (id < query[i].ff) {
            id++;
            op.insert(x[id].ss);
        }
        ans[query[i].ss.ss] = temp[*op.find_by_order(query[i].ss.ff - 1)];
    }

    for (ll i = 1; i <= tc; ++i) {
        cout << ans[i] << endl;
    }
}
