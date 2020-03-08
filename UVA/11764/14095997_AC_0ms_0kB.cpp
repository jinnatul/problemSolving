#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


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
#define Max                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932


int main(){

    ll n,m,i=0,j=0,t,ck=0,dk,a,b,ln;

    scl1(t);

    for(i=1; i<=t; i++){
        ck =0, dk=0;
        scl1(n);
        scl1(a);
        for(j=1; j<n; j++){
            scl1(b);
            if(a<b)
                ck++;
            else if(a>b)
                dk++;
          a = b;
        }
        printf("Case %lld: %lld %lld\n", i, ck, dk);
    }

}
