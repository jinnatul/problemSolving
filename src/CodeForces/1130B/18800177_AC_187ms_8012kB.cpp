#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000000
#define mod 1000000007
#define PI acos(-1.0)

#define size1 100010

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


map <ll, ll> mp1, mp2;
map <ll, ll>::iterator it1, it2;

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    for(ll i = 1; i <= 2 * num; i++){
        ll x;
        sc1(x);
        if(mp1[x] == 0) mp1[x] = i;
        else mp2[x] = i;
    }


    ll ans = 0, pos1 = 1, pos2 = 1;

    it1 = mp1.begin();
    it2 = mp2.begin();

    for(ll i = 1; i <= num; i++){
        ans += abs(pos1 - it1->second);
        ans += abs(pos2 - it2->second);
        pos1 = it1->second;
        pos2 = it2->second;
        it1++, it2++;
    }

    pf1(ans);

    return 0;
}