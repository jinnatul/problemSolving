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

    freopen("ghanophobia.in","r", stdin);

    int i=0,j=0,n,m,t,a,b,e,g,ck=0,ln;
    sc1(n);

    for(i=1; i<=n; i++){
        scanf("%d:%d", &e, &g);
        ck = g;
        e+=1;
        g+=6;

        if(e==g) e+=1,g+=ck;

        printf("Case %d: ", i);
        if(e>g) printf("YES\n");
        else if(e<g) printf("NO\n");
        else printf("PENALTIES\n");
    }
}
