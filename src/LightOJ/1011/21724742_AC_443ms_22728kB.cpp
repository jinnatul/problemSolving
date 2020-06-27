#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#define FastIO      ios_base::sync_with_stdio(false); cin.tie(0);

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
#define size1 20

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(x,a)    memset(x,a,sizeof(x))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;

ll dp[size1][1 << 15 + 2], priority[size1][size1];
ll m, n, tc, num, t = 1;

vll vc;

/* Bit check used or Not */
bool checkBIT(ll num, ll pos) {
    return (num & (1 << pos));
}

/* Set used Bit */
ll setBIT(ll num, ll pos) {
    return num = num | (1 << pos);
}

ll call(ll m_pos, ll f_pos) {

    if(m_pos >= num) return 0;
    if(dp[m_pos][f_pos] != 0) return dp[m_pos][f_pos];

    ll ans = 0;

    for (ll i = 0; i < num; ++i) {
        if(checkBIT(f_pos, i) == 0) {   //if this element not married before
            ll sum = priority[m_pos][i] + call(m_pos + 1, setBIT(f_pos, i));
            ans = max(ans, sum);
        }
    }

    return dp[m_pos][f_pos] = ans;
}


int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif

    sc1(tc);

    while (tc--){

        sc1(num);

        clr(priority, 0);

        cout << "Case " << t++ << ": ";

        for (ll i = 0; i < num; ++i) {
            for (ll j = 0; j < num; ++j) {
                sc1(priority[i][j]);
            }
        }

        clr(dp, 0);

        cout << call(0, 0) << endl;
    }
}