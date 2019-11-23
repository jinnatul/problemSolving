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
#define size1 5009

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

ll dp[size1][size1], arr[size1], k, n, m;

ll call(ll i, ll j)
{
    if(i > k || j > n) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    ll ans1 = arr[j] - arr[j - m] + call(i + 1, j + m);
    ll ans2 = call(i, j + 1);
    
    return dp[i][j] = max(ans1, ans2);
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    //ll n, m, tc, num, t = 1;

    sc2(n, m);
    sc1(k);

    for (ll i = 1; i <= n; ++i) {
        sc1(arr[i]);
        arr[i] += arr[i - 1];
    }
    
    mem(dp, -1);
    cout << call(1, m) << endl;
}
