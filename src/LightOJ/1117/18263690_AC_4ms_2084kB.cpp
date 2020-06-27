#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 10010

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll arr[20], ans, first, last;


ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

void solution(ll indx, ll lcmnum, ll pos)
{
    if(lcmnum > first) return;

    if(indx == last){
        if(pos == 0) return;
        else if(pos & 1) ans -= first / lcmnum;
        else ans += first / lcmnum;
        return;
    }

    solution(indx + 1, lcmnum, pos);
    solution(indx + 1, lcm(lcmnum, arr[indx]), pos + 1);
}

int main()
{
    ll tc, num, t = 1, i, j, cnt = 0;

    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    cin >> tc;

    while (tc--) {

        cin >> first >> last;

        arr[last];

        for (ll i = 0; i < last; i++) {
            sc1(arr[i]);
        }

        cout << "Case " << t++ << ": ";

        ans = 0;

        solution(0, 1, 0);

        pf1(first - abs(ans));
    }

    return 0;
}