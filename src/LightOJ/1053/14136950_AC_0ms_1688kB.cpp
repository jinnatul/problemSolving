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


int main(){

   ll a,t,b,c,d=0,j,n,i=1,m,ck=0;
   scl1(n);
   for(i=1; i<=n; i++){
    scl3(a,b,c);
    if(a*a + b*b == c*c)
        printf("Case %lld: yes\n", i);
    else if(a*a + c*c == b*b)
        printf("Case %lld: yes\n", i);
    else if(b*b + c*c == a*a)
        printf("Case %lld: yes\n", i);
    else
        printf("Case %lld: no\n", i);
   }
}
