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

    ll n, m, tc, num, t = 1;

    vll vc;

    vc.push_back(11);
    vc.push_back(22);
    vc.push_back(33);
    vc.push_back(44);
    vc.push_back(55);
    vc.push_back(66);
    vc.push_back(77);
    vc.push_back(88);
    vc.push_back(99);

    ll pos = 0;
    while (t < 70){
        for (ll i = 0; i < 9; ++i) {
            ll val = (vc[pos++] *  10) + vc[i] % 10;
            vc.push_back(val);
            t++;
        }
    }

    for (ll i = 1; i < 10; i++) {
        vc.push_back(i);
    }


    sort(vc.begin(), vc.end());


    sc1(tc);
    while (tc--){
        sc1(num);

        ll posnum = upper_bound(vc.begin(), vc.end(), num) - vc.begin();

        cout << posnum << endl;
    }

}
