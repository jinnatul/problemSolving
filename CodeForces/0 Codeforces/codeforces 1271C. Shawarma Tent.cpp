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

ll xx[size1], yy[size1];
vll vc, temp;

void calDis(ll sx, ll sy, ll num)
{
    for (ll i = 0; i < num; ++i) {
        ll x = abs(sx - xx[i]);
        ll y = abs(sy - yy[i]);
        vc.push_back(x + y);
    }
}

void tempCalDis(ll sx, ll sy, ll num)
{
    temp.clear();
    for (ll i = 0; i < num; ++i) {
        ll x = abs(sx - xx[i]);
        ll y = abs(sy - yy[i]);
        temp.push_back(x + y);
    }
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;
    ll sx, sy;

    sc1(num);
    sc2(sx, sy);

    for (ll i = 0; i < num; ++i) {
        sc2(xx[i], yy[i]);
    }

    calDis(sx, sy, num);

    ll cnt = 0, ans = 0, ax, ay;
    tempCalDis(sx, sy + 1, num);
    cnt = 0;
    for (ll i = 0; i < temp.size(); ++i) {
        if(temp[i] <= vc[i]) cnt++;
    }
    if(cnt > ans){
        ax = sx;
        ay = sy + 1;
        ans = cnt;
    }

    tempCalDis(sx, sy - 1, num);
    cnt = 0;
    for (ll i = 0; i < temp.size(); ++i) {
        if(temp[i] <= vc[i]) cnt++;
    }
    if(cnt > ans){
        ax = sx;
        ay = sy - 1;
        ans = cnt;
    }

    tempCalDis(sx + 1, sy, num);
    cnt = 0;
    for (ll i = 0; i < temp.size(); ++i) {
        if(temp[i] <= vc[i]) cnt++;
    }
    if(cnt > ans){
        ax = sx + 1;
        ay = sy;
        ans = cnt;
    }

    tempCalDis(sx - 1, sy, num);
    cnt = 0;
    for (ll i = 0; i < temp.size(); ++i) {
        if(temp[i] <= vc[i]) cnt++;
    }
    if(cnt > ans){
        ax = sx - 1;
        ay = sy;
        ans = cnt;
    }

    cout << ans << endl;
    cout << ax << " " << ay << endl;
}
