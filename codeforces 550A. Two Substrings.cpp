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
#define size1 150005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";
#define end '\n'

typedef vector <ll> vll;
typedef set <ll> sll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    string str;
    cin >> str;

    bool ab = false, ba = false;

    for (ll i = 0; i < str.size() - 1; ++i) {
        if(str[i] == 'A' && str[i + 1] == 'B' && ab == false){
            ab = true;
            i++;
        }
        else if(str[i] == 'B' && str[i + 1] == 'A' && ab){
            ba = true;
        }
    }

    if(ba) return yes,0;

    ab = false, ba = false;
    for (ll i = 0; i < str.size() - 1; ++i) {
        if(str[i] == 'B' && str[i + 1] == 'A' && ba == false){
            ba = true;
            i++;
        }
        else if(str[i] == 'A' && str[i + 1] == 'B' && ba){
            ab = true;
        }
    }

    if(ab) cout << "YES" << end;
    else cout << "NO" << end;
}
