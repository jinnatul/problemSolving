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
#define size1 10001

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

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

    sc1(tc);

    while (tc--) {

        sc1(num);

        ll a, b, c;
        cin >> a >> b >> c;

        string arr, ans = "";
        cin >> arr;
        ans = arr;

        bool check[num];
        memset(check, false, sizeof(check));

        ll cnt = 0;
        for (ll i = 0; i < num; ++i) {
            if (arr[i] == 'S' && a > 0) {
                a--;
                ans[i] = 'R';
                check[i] = true;
                cnt++;
            }
            else if (arr[i] == 'R' && b > 0) {
                b--;
                ans[i] = 'P';
                check[i] = true;
                cnt++;
            }
            else if (arr[i] == 'P' && c > 0) {
                c--;
                ans[i] = 'S';
                check[i] = true;
                cnt++;
            }
        }

        ll mid = (num + 1)/2;
        if(cnt < mid) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (ll i = 0; i < num; ++i) {
            if(check[i] == false) {
                if(a > 0) a--, ans[i] = 'R';
                else if(b > 0) b--, ans[i] = 'P';
                else if(c > 0) c--, ans[i] = 'S';
            }
            cout << ans[i];
        }
        cout << '\n';
    }
}
