#include<iostream>
#include <string>
#include <algorithm>

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
#define size1 1005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(x,a)    memset(x,a,sizeof(x))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

ll m, n, tc, num, t = 1;

ll dp[size1][size1];

ll call(string aa, string bb) {

    ll ln1 = aa.size();
    ll ln2 = bb.size();

    for (ll i = 0; i <= ln1; ++i) {
        for (ll j = 0; j <= ln2; ++j) {
            dp[i][j] = 0;
        }
    }

    for (ll i = 1; i <= ln1; ++i) {
        for (ll j = 1; j <= ln2; ++j) {
            if(aa[i - 1] == bb[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[ln1][ln2];
}


int main()
{
    FastIO;
    #ifndef ONLINE_JUDGE
         //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
         //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
    #endif

    string aa , bb;

    while (cin >> aa >> bb){
        cout << call(aa, bb) << endl;
    }
}