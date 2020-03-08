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

#define size1 200050

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
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    int n, m, tc, num, t = 1;

    sc1(tc);

    while (tc--){
        string str;
        cin >> str;
        ll l = 0, r = 0, d = 0, u = 0;
        for (ll i = 0; i < str.length(); ++i) {
            if(str[i] == 'L') l++;
            else if(str[i] == 'R') r++;
            else if(str[i] == 'U') u++;
            else d++;
        }

        l = min(l, r);
        r = l;
        d = min(d, u);
        u = d;

        if(u == 0 || d == 0){
            if(l > 0 && r > 0){
                cout << 2 << endl;
                cout << "LR" << endl;
                continue;
            }
        }
        if(l == 0 || r == 0){
            if(d > 0 && u > 0){
                cout << 2 << endl;
                cout << "UD" << endl;
                continue;
            }
        }

        if(l > 0 && r > 0 && d > 0 && u > 0) {

            string ans = "";
            for (ll i = 0; i < r; ++i) {
                ans += "R";
            }
            for (ll i = 0; i < d; ++i) {
                ans += "D";
            }
            for (ll i = 0; i < l; ++i) {
                ans += "L";
            }
            for (ll i = 0; i < u; ++i) {
                ans += "U";
            }

            cout << ans.length() << endl;
            cout << ans << endl;
        }
        else
            cout << 0 << endl;
    }
}
