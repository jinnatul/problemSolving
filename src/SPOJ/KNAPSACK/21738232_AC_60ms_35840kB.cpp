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
#define size1 2005

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

ll dp[size1][size1], weight[size1], price[size1];
ll m, n, tc, num, t = 1, totalCost, items;


ll call(ll item, ll newWeight) {
    if(item == items) return 0;

    if(dp[item][newWeight] != -1) return dp[item][newWeight];

    ll ans1 = 0, ans2 = 0;
    if(newWeight + weight[item] <= totalCost){
        ans1 = price[item] + call(item + 1, newWeight + weight[item]);
    }

    ans2 = call(item + 1, newWeight);

    return dp[item][newWeight] = max(ans1, ans2);
}


int main()
{
    FastIO;
#ifndef ONLINE_JUDGE
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif


    sc2(totalCost, items);

    for (ll i = 0; i < items; ++i) {
        sc2(weight[i], price[i]);
    }

    clr(dp,-1);
    cout << call(0, 0) << endl;
}