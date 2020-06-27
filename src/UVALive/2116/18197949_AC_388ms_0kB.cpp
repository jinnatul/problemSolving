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

#define size1 10005

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

bool checkprime(ll num)
{
    if(num < 2) return false;
    for(ll i = 2; i * i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}


ll MobiusFunction(ll num)
{
    if(num == 1) return 1;

    ll cnt = 0;

    for(ll i = 1; i <= num; i++){
        if(num % i == 0 && checkprime(i) ){
            if(num % (i * i) == 0) return 0;
            else cnt++;
        }
    }

    if(cnt & 1) return -1;
    else return 1;
}

int main()
{
    ll tc, num, t = 1;

    while (sc1(num)) {

        if(num == -1) break;

        if(t > 1) cout << endl;

        cout << "M(" << num << ") = ";

        ll ans = MobiusFunction(num);

        cout << ans << endl;

       t++;
    }

    return 0;
}