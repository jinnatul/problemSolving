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
#define size1 2000006

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

vll vc, temp;
void pre()
{
    vc.push_back(0);
    vc.push_back(4);
    vc.push_back(7);
    temp.push_back(44);
    temp.push_back(47);
    temp.push_back(74);
    temp.push_back(77);
    vc.push_back(44);
    vc.push_back(47);
    vc.push_back(74);
    vc.push_back(77);
    ll mul = 100, now;
    while (mul <= 1000000000) {
        vll temp2;
        for (ll i = 0; i < temp.size(); ++i) {
            now = temp[i] + (mul * 4);
            vc.push_back(now);
            temp2.push_back(now);
        }
        for (ll i = 0; i < temp.size(); ++i) {
            now = temp[i] + (mul * 7);
            vc.push_back(now);
            temp2.push_back(now);
        }
        mul*=10;
        temp = temp2;
        temp2.clear();
    }
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    pre();

    ll left, right;
    sc2(left, right);

    sort(vc.begin(), vc.end());

    ll ans = 0;
    for (ll i = 0; i < vc.size(); ++i) {
        ll nowleft = max(left, vc[i] + 1);
        ll nowright = min(right, vc[i + 1]);

        if(nowleft <= nowright) {
            ll howmultnum = (nowright - nowleft + 1);
            ans += howmultnum * vc[i + 1];
        }
    }

    pf1(ans);
}