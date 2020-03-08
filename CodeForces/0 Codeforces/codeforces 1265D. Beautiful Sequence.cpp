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

void print(ll a, ll p, ll d)
{
    for(ll i = 0; i < a; i++) cout << "0 1 ";
    for(ll i = 0; i < p; i++) cout << "2 1 ";
    for(ll i = 0; i < d; i++) cout << "2 3 ";
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, t = 1;

    ll a, b, c, d;
    sc2(a, b);
    sc2(c, d);

    ll cnt = (a > 0) + (b > 0) + (c > 0) + (d > 0);

    if(cnt == 1){
        if(a > 0){
            if(a == 1) cout << "YES" << "\n" << "0";
            else no;
        }
        if(b > 0){
            if(b == 1) cout << "YES" << "\n" << "1";
            else no;
        }
        if(c > 0){
            if(c == 1) cout << "YES" << "\n" << "2";
            else no;
        }
        if(d > 0){
            if(d == 1) cout << "YES" << "\n" << "3";
            else no;
        }
        return 0;
    }

    if(c == d && c == 0 && a == b + 1){
        cout << "YES" << "\n" << "0 ";
        for (ll i = 0; i < b; ++i) cout << "1 0 ";
        return 0;
    }

    if(a == b && b == 0 && d == c + 1){
        cout << "YES" << "\n" << "3 ";
        for (ll i = 0; i < c; ++i) cout << "2 3 ";
        return 0;
    }

    if(a > b || d > c) return no,0;
    ll p = b - a, q = c - d;
    if(abs(p - q) > 1) return no,0;

    yes;
    if(p == q) {
        print(a, p, d);
    }
    else if(p < q) {
        print(a, p, d);
        cout << 2 << endl;
    }
    else {
        cout << 1 << " ";
        print(a, q, d);
    }
}
