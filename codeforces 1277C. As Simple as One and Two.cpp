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
typedef map <ll, ll, greater<ll> > mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc1(tc);

    while (tc--){
        string str;
        cin >> str;
        ll ln = str.length();

        vll vc;
        for (ll i = 0; i < ln; ++i) {
            if(i + 4 < ln && str[i] == 't' && str[i + 1] =='w' && str[i + 2] == 'o' && str[i + 3] =='n' && str[i + 4] == 'e'){
                vc.pb(i + 3);
                i += 4;
            }
            else if(i + 2 < ln && str[i] == 'o' && str[i + 1] =='n' && str[i + 2] == 'e'){
                vc.pb(i + 2);
                i += 2;
            }
            else if(i + 2 < ln && str[i] == 't' && str[i + 1] =='w' && str[i + 2] == 'o'){
                vc.pb(i + 2);
                i += 2;
            }
        }
        
        cout << vc.size() << endl;

        vpnt(vc);
    }
}
