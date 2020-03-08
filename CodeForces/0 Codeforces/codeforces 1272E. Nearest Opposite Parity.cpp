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

vector <vector<ll> > graph(size1);
vll ans;
ll num;

void bfs(vector<ll> &start, vector<ll> &end)
{
    vector <ll> mid(num, INT_MAX);
    qll qu;

    for (auto v : start){
        mid[v] = 0;
        qu.push(v);
    }

    while (!qu.empty()){
        ll v = qu.front();
        qu.pop();

        for(auto to : graph[v]){
            if(mid[to] == INT_MAX){
                mid[to] = mid[v] + 1;
                qu.push(to);
            }
        }
    }

    for(auto v : end){
        if(mid[v] != INT_MAX)
            ans[v] = mid[v];
    }
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, t = 1;

    sc1(num);
    ll arr[num];

    vll even, odd;
    for (ll i = 0; i < num; ++i) {
        sc1(arr[i]);
        if(arr[i] & 1) odd.pb(i);
        else even.pb(i);
    }

    for (ll i = 0; i < num; ++i) {
        ll lf = i - arr[i];
        ll rg = i + arr[i];

        if(lf >= 0) graph[lf].pb(i);
        if(rg < num) graph[rg].pb(i);
    }

    ans = vector<ll> (num, -1);

    bfs(even, odd);
    bfs(odd, even);

    for (auto it : ans) cout << it << " ";
    cout << endl;

}
