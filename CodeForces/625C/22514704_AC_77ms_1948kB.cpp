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
#define mod 1000000007
#define PI acos(-1.0)
#define size1 1010

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
typedef vector <pair <ll , ll> > vpll;

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc2(num, m);

    ll ans[num][num];

    for (ll i = 0; i < num; ++i) {
        for (ll j = 0; j < num; ++j) {
            ans[i][j] = 0;
        }
    }

    m--;
    ll right = num * num, left = 1;
    for (ll i = 0; i < num; ++i) {
        for (ll j = num - 1; j >= m; j--) {
            ans[i][j] = right;
            right--;
        }
    }

    for (ll i = 0; i < num; ++i) {
        for (ll j = 0; j < m; j++) {
            ans[i][j] = left;
            left++;
        }
    }

    ll sum = 0;
    for (ll i = 0; i < num; ++i) {
        sum += ans[i][m];
    }

    pf1(sum);
    for (ll i = 0; i < num; ++i) {
        for (ll j = 0; j < num; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}