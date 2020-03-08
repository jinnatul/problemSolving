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


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc1(tc);

    while (tc--){
        sc1(num);
        ll arr[num];
        for (ll i = 0; i < num; ++i) {
            sc1(arr[i]);
        }

        mll mpp;
        for (ll i = 0; i < num/2; ++i) {
            mpp[arr[i]]++;
        }
        ll mid = arr[num / 2];

        if(mpp.find(mid) != mpp.end()) mpp.erase(mid);

        vll vc;
        for(auto it : mpp){
            vc.pb(it.second);
        }

        if(vc.size() < 3) {
            cout << "0 0 0" << endl;
            continue;
        }

        ll g = vc[0], s = 0, b = 0;

        ll pos = 1;
        while (pos < vc.size()){
            if(s > g) break;
            s += vc[pos];
            pos++;
        }

        for (ll i = pos; i < vc.size(); ++i) {
            b += vc[i];
        }

        if(g < s && g < b)
            cout << g << " " << s << " " << b << endl;
        else
            cout << "0 0 0" << endl;
    }
}
