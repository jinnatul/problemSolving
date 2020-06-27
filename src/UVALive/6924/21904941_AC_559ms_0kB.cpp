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
#define size1 165

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(arrayName, setVal) memset(arrayName,  setVal, sizeof(arrayName))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";


bool checkBIT(ll num, ll pos) { return (num & (1 << pos)); } /* Bit check used or Not */
ll setBIT(ll num, ll pos) { return num = num | (1 << pos); } /* Set used Bit */

typedef vector <ll> vll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;

ll cnt[size1];

int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif

    ll m, n, tc, num, t = 1, totalCost, items;

    sc1(tc);

    while (tc--){

        clr(cnt, 0);

        sc1(num);

        for (ll i = 0; i < num; ++i) {
            sc1(m);
            cnt[m]++;
        }

        for (ll i = 1; i <= 160; ++i) {
            cnt[i] += cnt[i - 1];
            //cout << cnt[i] << endl;
        }

        cout << "Case " << t++ << ": ";

        ll minSum = INT_MAX, bnd1 = 0, bnd2 = 0, bnd3 = 0;
        for (ll i = 0; i <= 160; ++i) {
            for (ll j = i + 1; j <= 160; ++j) {
                for (ll k = j + 1; k <= 160; ++k) {
                    ll diff = 0;
                    diff += abs((4 * cnt[i]) - num);
                    diff += abs((4 * (cnt[j] - cnt[i])) - num);
                    diff += abs((4 * (cnt[k] - cnt[j])) - num);
                    diff += abs((4 * (cnt[160] - cnt[k])) - num);
                    if(diff < minSum){
                        bnd1 = i;
                        bnd2 = j;
                        bnd3 = k;
                        minSum = diff;
                    }
                }
            }
        }

        cout << bnd1 << " " << bnd2 << " " << bnd3 << endl;
    }
}