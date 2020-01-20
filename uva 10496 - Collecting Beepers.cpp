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

    sc1(tc);
    while (tc--) {
        ll xMax, yMax;
        sc2(xMax, yMax);
        ll xStart, yStart;
        sc2(xStart, yStart);
        sc1(m);

        vll xSide(m), ySide(m), pos(m);

        for (ll i = 0; i < m; ++i) {
            sc2(xSide[i], ySide[i]);
            pos[i] = i;
        }

        ll ans = INT_MAX;

        do {
            ll sum = abs(xSide[pos[0]] - xStart) + abs(ySide[pos[0]] - yStart)
                    + abs(xSide[pos[m - 1]] - xStart) + abs(ySide[pos[m - 1]] - yStart);

            for (ll i = 1; i < m; ++i) {
                sum += abs(xSide[pos[i]] - xSide[pos[i - 1]])
                        + abs(ySide[pos[i]] - ySide[pos[i - 1]]);
            }
            if(ans > sum) ans = sum;
            
        }while (next_permutation(pos.begin(), pos.end()));

        cout << "The shortest path has length " << ans << endl;
    }
}
