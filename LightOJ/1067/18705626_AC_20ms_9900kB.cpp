#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000001
#define mod 1000003
#define PI acos(-1.0)

#define size1 1000003

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

ll InverseMod(ll base, ll pow)
{
    if(pow == 0) return 1;

    ll ans = InverseMod(base, pow / 2);

    ans = (ans * ans) % mod;

    if(pow & 1){
        return (ans * base) % mod;
    }
    else{
        return ans;
    }
}

ll fecto[mx];
void preFectorial()
{
    fecto[1] = 1;

    for(ll i = 2; i < mx; i++)
        fecto[i] = (fecto[i - 1] * i) % mod;
}

int main() {

    //seive();

    preFectorial();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){
        ll choose;

        sc2(num, choose);

        cout << "Case " << t++ << ": ";

        if(num < choose){
            cout << "0" << endl;
            continue;
        }
        if(num == choose || choose == 0){
            cout << "1" << endl;
            continue;
        }

        ll upFect = fecto[num];
        ll downFect = ((fecto[num - choose] % mod) * (fecto[choose] % mod)) % mod;

        ll ans = ((upFect % mod) * InverseMod(downFect, mod - 2)) % mod;

        pf1(ans);
    }

    return 0;
}