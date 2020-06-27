#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector< pii > vii;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

//Other
#define co cout
#define el endl

/// Constants
#define Max                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932


ll checkme(ll n);

int main()
{
    ll i,j,k,n,m,ck=0;
    scl1(n);
    if(n<10)
        n*=n;
    ck = checkme(n);

    if(ck==1)
        co<<"HAPPY"<<el;
    else
        co<<"UNHAPPY"<<el;

}


ll checkme(ll n)
{
    ll last,multi = 1,ck=0,sum=0,i;

    while(n){
        last = n%10;
        last*=last;
        sum+=last;
        n/=10;
    }
    if(sum==1)
        return 1;
    else if(sum<10)
        return 0;
    else
        return checkme(sum);

}
