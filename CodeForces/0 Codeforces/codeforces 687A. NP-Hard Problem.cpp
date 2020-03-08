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
#define size1 100005

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

vll graph[size1], col1, col2;
ll color[size1];

bool dfs(ll u, ll col)
{
    color[u] = col;

    if(col == 1) col1.pb(u);
    else col2.pb(u);

    bool ans = true;

    for (ll i = 0; i < graph[u].size(); ++i) {
        ll v = graph[u][i];

        if(color[v] == 0){
            if(color[u] == 1) ans &= dfs(v, 2);
            else ans &= dfs(v, 1);
        }
        else{
            if(color[v] == color[u]) ans = false;
        }
    }
    return ans;
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc2(n, m);

    for (ll i = 0; i < m; ++i) {
        ll u, v;
        sc2(u, v);
        graph[u].pb(v);
        graph[v].pb(u);
    }

    mem(color, 0);

    for (ll i = 1; i <= n; ++i) {
        if(color[i] != 0 || graph[i].empty()) continue;

        if(dfs(i, 1) == false){
            return cout << -1 << endl,0;
        }
    }

    cout << col1.size() << endl;
    vpnt(col1);

    cout << col2.size() << endl;
    vpnt(col2);
}
