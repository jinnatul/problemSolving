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

#define size1 200010

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

ll max(ll a, ll b) { return (a > b)? a : b; }
ll max(ll a, ll b, ll c) { return max(max(a, b), c); }

ll maxCrossSum(ll arr[], ll l, ll m, ll h)
{
    ll sum = 0;
    ll left_sum = INT_MIN;
    for (ll i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }

    sum = 0;
    ll right_sum = INT_MIN;
    for (ll i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }

    ll sumT = left_sum + right_sum;
    return sumT;
}

ll maxSubSum(ll arr[], ll l, ll h)
{
    if (l == h)
        return arr[l];

    int m = (l + h)/2;

    return max(maxSubSum(arr, l, m),
               maxSubSum(arr, m+1, h),
               maxCrossSum(arr, l, m, h));
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, num, tc, t = 1;

    sc1(tc);
    while (tc--) {
        sc1(num);
        ll arr[num];

        ll sum = 0;
        for (ll i = 0; i < num; ++i) {
            sc1(arr[i]);
            sum += arr[i];
        }

        ll sv[3];
        sv[0] = maxSubSum(arr, 0, num - 1);
        sv[1] = maxSubSum(arr, 0, num - 2);
        sv[2] = maxSubSum(arr, 1, num - 1);

        sort(sv, sv + 3);

        if(sum > sv[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
