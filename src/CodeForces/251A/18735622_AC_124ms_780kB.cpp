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

#define size1 5001

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

ll calBinomialCoefficient(ll num, ll choose)
{
    if(choose == 0) return 1;
    if(choose > num / 2) return calBinomialCoefficient(num, num - choose);
    return num * calBinomialCoefficient(num - 1, choose - 1)/ choose;
}


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc2(num, choose);

    ll arr[num];

    for(ll i = 0; i < num; i++)
        sc1(arr[i]);


    ll ans = 0;
    for(ll i = 0, j = 0; i < num; i++){
        while (arr[i] - arr[j] > choose) j++;

        ans += ((i - j) * (i - j - 1))/2;
    }

    pf1(ans);

    return 0;
}