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
#define mod 100000007
#define PI acos(-1.0)
#define size1 105

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
typedef vector <pair <ll, ll> > vpll;

ll dp[size1][size1], arr[size1][size1];
ll m, n, tc, num, t = 1;

vll vc;

ll call(ll i, ll j) {

    if(i == n) return 0;
    if(i < 0 || j < 0 || j == m) return mx;

    if(dp[i][j] != 0) return dp[i][j];

    ll a = arr[i][j] + call(i + 1, j + 1);
    ll b = arr[i][j] + call(i + 1, j);
    ll c = arr[i][j] + call(i + 1, j - 1);

    return dp[i][j] = min(a, min(b, c));
}

void inZero()
{
    for (ll i = 0; i < size1; ++i) {
        for (ll j = 0; j < size1; ++j) {
            dp[i][j] = 0;
        }
    }
}

int main()
{
    sc2(n, m);

    for (ll i = 0; i < n; ++i) {
        for (ll j = 0; j < m; ++j) {
            sc1(arr[i][j]);
        }
    }

    inZero();

    ll ans = INT_MAX;
    for (int j = 0; j < m; ++j) {
        ans = min(ans, call(0, j));
    }

    pf1(ans);
}