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
#define size1 1000

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

ll dp[size1][size1], arr[size1][size1];
ll m, n, tc, num, t = 1;

vll vc;

ll call(ll i, ll j) {

    if(dp[i][j] != 0) return dp[i][j];

    ll mxSUM1 = 0, mxSUM2 = 0;

    if(arr[i][j]){

        mxSUM1 = arr[i][j] + call(i + 1, j);
        if(i < num - 1)
            mxSUM2 = arr[i][j] + call(i + 1, j + 1);

        else if(i >= num - 1 && j > 0)
            mxSUM2 = arr[i][j] + call(i + 1, j - 1);
    }

    return dp[i][j] = max(mxSUM1, mxSUM2);
}


int main()
{
    FastIO;
    #ifndef ONLINE_JUDGE
         freopen("/opt/Coding/clion code/input.txt", "r", stdin);
         freopen("/opt/Coding/clion code/output.txt", "w", stdout);
    #endif

    sc1(tc);

    while (tc--){

        sc1(num);

        clr(dp, 0);
        clr(arr, 0);

        ll col = 0;
        bool ck = true;
        for (ll i = 0; i < num * 2; ++i) {
            if(ck == true) col++;
            else col--;
            for (ll j = 0; j < col; ++j) {
                sc1(arr[i][j]);
            }
            if(col == num) ck = false;
        }

        cout << "Case " << t++ << ": ";
        cout << call(0, 0) << endl;

    }
}