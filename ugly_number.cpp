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
void uglyDP()
{
    dp[0] = 1;
    ll multiple_2 = 2, multiple_3 = 3, multiple_5 = 5;
    ll pos2 = 0, pos3 = 0, pos5 = 0;

    for(ll i = 1; i <= 1505; i++){
        ll next_uglyNUm = min(multiple_2, min(multiple_3, multiple_5));
        dp[i] = next_uglyNUm;

        if(next_uglyNUm == multiple_2){
            pos2++;
            multiple_2 = dp[pos2] * 2;
        }
        if(next_uglyNUm == multiple_3){
            pos3++;
            multiple_3 = dp[pos3] * 3;
        }
        if(next_uglyNUm == multiple_5){
            pos5++;
            multiple_5 = dp[pos5] * 5;
        }
    }
}

int main()
{
    ll m, tc, num, t = 1;

    uglyDP();

    while (sc1(num) && num){
        cout << dp[num - 1] << endl;
    }
}

/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence
1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, ...
 
Sample Input
1
2
9
0
Sample Output
1
2
10
 */
