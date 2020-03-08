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
#define size1 2005

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

ll dp[size1][size1], path[size1][size1], aa[size1], bb[size1];
vll vc;

ll lcs(ll szaa, ll szbb)
{
    ll ans = 0, ansi = 0, ansj = 0;

    for (ll i = 1; i <= szaa; ++i) {

        ll Max = 0, maxj = 0;
        for (ll j = 1; j <= szbb; ++j) {

            dp[i][j] = dp[i - 1][j];
            path[i][j] = -1;

            if(bb[j] < aa[i]){
                if(dp[i - 1][j] > Max){
                    Max = dp[i - 1][j];
                    maxj = j;
                }
            }
            else if(bb[j] == aa[i]){
                dp[i][j] = Max + 1;
                path[i][j] = maxj;
            }
            if(dp[i][j] > ans){
                ans = dp[i][j];
                ansi = i, ansj = j;
            }
        }
    }

    ll now = ans;

    while(now)
    {
        if(path[ansi][ansj]!=-1){
            vc.push_back(bb[ansj]);
            ansj = path[ansi][ansj];
            now--;
        }
        ansi--;
    }

    return ans;
}

int main()
{
    ll m, tc, num, t = 1;

    ll szaa, szbb;

    sc1(szaa);

    for (ll i = 1; i <= szaa; ++i) {
        sc1(aa[i]);
    }

    sc1(szbb);
    ll brr[szbb + 5];

    for (ll i = 1; i <= szbb; ++i) {
        sc1(bb[i]);
    }

    cout << lcs(szaa, szbb) << endl;

    reverse(vc.begin(), vc.end());
    vpnt(vc);
}
