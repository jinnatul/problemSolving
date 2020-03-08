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
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc1(num);
    string str;
    cin >> str;

    ll b = 0, w= 0;
    for (ll i = 0; i < num; ++i) {
        if(str[i] == 'B') b++;
        else w++;
    }

    if(!b || !w)
        return cout << 0 << endl,0;

    if((b & 1) && (w & 1))
        return cout << -1 << endl,0;

    vll vc;
    if(b & 1){
        for (ll i = 0; i < num - 1; ++i) {
            if(str[i] == 'W'){
                if(str[i + 1] == 'W'){
                    str[i] = 'B';
                    str[i + 1] = 'B';
                }
                else{
                    swap(str[i], str[i + 1]);
                }
                vc.pb(i + 1);
            }
        }
    }
    else {
        for (ll i = 0; i < num - 1; ++i) {
            if(str[i] == 'B'){
                if(str[i + 1] == 'B'){
                    str[i] = 'W';
                    str[i + 1] = 'W';
                }
                else{
                    swap(str[i], str[i + 1]);
                }
                vc.pb(i + 1);
            }
        }
    }

    cout << vc.size() << endl;
    vpnt(vc);
}
