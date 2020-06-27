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
#define size1 105

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

ll dp[size1][size1], arr[size1][3];
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

ll call(ll i, ll j) {

    if(i >= num) return 0;
    if(i < 0 || j < 0 || j == 3) return mx;

    if(dp[i][j] != -1) return dp[i][j];

    ll ans = 0, a = 0, b = 0;
    if(j == 0){
        a = call(i + 1, j + 1);
        b = call(i + 1, j + 2);
        ans = min(a, b) + arr[i][j];
    }
    if(j == 1){
        a = call(i + 1, j - 1);
        b = call(i + 1, j + 1);
        ans = min(a, b) + arr[i][j];
    }
    if(j == 2){
        a = call(i + 1, j - 1);
        b = call(i + 1, j - 2);
        ans = min(a, b) + arr[i][j];
    }

    return dp[i][j] = ans;
}


int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif

    sc1(tc);

    while (tc--){

        sc1(num);

        clr(arr, 0);

        cout << "Case " << t++ << ": ";

        for (ll i = 0; i < num; ++i) {
            for (ll j = 0; j < 3; ++j) {
                sc1(arr[i][j]);
            }
        }

        clr(dp, -1);

        ll ans = INT_MAX;

        for(ll j = 0; j < 3; j++){
            ans = min(ans, call(0, j));
            //cout << call(0, j) << endl;
        }

        cout << ans << endl;
    }
}