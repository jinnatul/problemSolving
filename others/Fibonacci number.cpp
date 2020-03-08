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
#define size1 200005

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

ll dp[2000];
ll fibonacciDP(ll num)
{
    if(dp[num] == 0){
        if(num <= 1) dp[num] = num;
        else
            dp[num] = fibonacciDP(num - 1) + fibonacciDP(num - 2);
    }

    return dp[num];
}

int main()
{
    ll m, tc, num, t = 1;

    fibonacciDP(100);

    for (int i = 0; i < 10; ++i) {
        cout << dp[i] << endl;
    }
}

/*
 * Fibonacci number series
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
 
 output:
 0
1
1
2
3
5
8
13
21
34
 */
