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

#define size1 1005

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

ll node, edge, checkColor[size1];
vll graph[size1];
bool visited[size1];

void bfs(ll pos) {

    visited[pos] = true;
    checkColor[pos] = 1;

    qll qu;
    qu.push(pos);

    bool ok = true;
    while (!qu.empty()) {
        ll top = qu.front();
        qu.pop();

        for (ll i = 0; i < graph[top].size(); ++i) {
            ll u = graph[top][i];

            if(!visited[u]) {
                visited[u] = true;
                qu.push(u);
                if(checkColor[top] == 1)
                    checkColor[u] = 2;
                else if(checkColor[top] == 2)
                    checkColor[u] = 1;
            }
            else if(checkColor[top] == checkColor[u]){
                ok = false;
                break;
            }
        }
        if(ok == false) break;
    }

    if(ok) cout << "BICOLORABLE." << endl;
    else cout << "NOT BICOLORABLE." << endl;
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, m, num, tc, t = 1;

    while (sc1(node)) {
        if(node == 0) break;

        sc1(edge);
        for (ll i = 0; i < edge; ++i) {
            sc2(n, m);
            graph[n].pb(m);
            graph[m].pb(n);
        }

        bfs(0);
        mem(graph, 0);
        mem(visited, false);
        mem(checkColor, 0);
    }
}