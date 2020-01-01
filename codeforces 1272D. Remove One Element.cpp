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

#define size1 200005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll, greater<ll> > mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

ll arr[size1], left1[size1], right1[size1];

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc1(num);
    ll arr[num];

    for (ll i = 0; i < num; ++i) {
        sc1(arr[i]);
    }

    ll ans = 1, cnt = 1;

    for (ll i = 1; i < num; ++i) {
        if(arr[i] > arr[i - 1]) cnt++;
        else cnt = 1;
        ans = max(ans, cnt);
    }

    left1[0] = 1;
    for (ll i = 1; i < num; ++i) {
        left1[i] = arr[i] > arr[i - 1] ? left1[i - 1] + 1 : 1;
    }

    right1[num - 1] = 1;
    for (ll i = num - 2; i >= 0; i--) {
        right1[i] = arr[i] < arr[i + 1] ? right1[i + 1] + 1 : 1;
    }

    for (ll i = 1; i < num - 1; ++i) {
        if(arr[i - 1] < arr[i + 1])
            ans = max(ans, left1[i - 1] + right1[i + 1]);
    }

    pf1(ans);
}


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

#define size1 200005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll, greater<ll> > mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

ll arr[size1], dp[size1][2];

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc1(num);
    ll arr[num];

    for (ll i = 0; i < num; ++i) {
        sc1(arr[i]);
    }

    ll ans = 0;
    for (ll i = 0; i < num; ++i) {
        dp[i][0] = max(dp[i][0], (ll)1);
        if(arr[i] < arr[i + 1]){
            dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + 1);
            dp[i + 1][1] = max(dp[i + 1][1], dp[i][1] + 1);
        }
        if(arr[i] < arr[i + 2]){
            dp[i + 2][1] = max(dp[i + 2][1], dp[i][0] + 1);
        }

        ans = max(ans, max(dp[i][0], dp[i][1]));
    }

    pf1(ans);
}
