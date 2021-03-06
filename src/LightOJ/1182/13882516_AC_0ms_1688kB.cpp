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


/// Constants
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932

ll check(ll a);

int main()
{
    ll a,b,i,j,m,n,ck=0,dk=0;
    scl1(n);

    for(i=1; i<=n; i++){
        scl1(a);
        ck = check(a);
        if(ck%2==0)
            printf("Case %lld: even\n",i);
        else
            printf("Case %lld: odd\n",i);
    }
}


ll check(ll a)
{
   unsigned int mask = 1 << (sizeof(int) * 8 - 1);

    int ck=0;
   for(int i = 0; i < sizeof(int) * 8; i++)
   {
      if( (a & mask) != 0 )
          ck++;

      mask  >>= 1;
   }
   return ck;

}
