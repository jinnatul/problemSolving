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
#define size1 10000

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc1(m);

    while (m--) {
        sc1(num);
        ll arr[num + 5], pos[num + 5];
        bool used[num + 5];

        for (ll i = 1; i <= num; ++i) {
            sc1(arr[i]);
        }

        clr(used, 0);
        for (ll i = 1; i <= num; ++i) {

            ll indx = 0;
            for (ll j = 1; j <= num; ++j) {
                if(arr[j] == i) {
                    indx = j;
                }
            }
            ll j = indx;

            while (j > i) {
                if(arr[j] < arr[j - 1] && !used[j]) {
                    swap(arr[j], arr[j - 1]);
                    used[j] = 1;
                    j--;
                }
                else break;
            }
        }

        for (ll i = 1; i <= num; ++i) {
            cout << arr[i] << (i < num ? ' ' : '\n');
        }
    }
}
