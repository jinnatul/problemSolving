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

#define mx 100000000
#define pf(a) cout<<a<<endl

int main()
{
    ll i=0,j=0,t,k=0,l,a=0,b,m=0,n,ck=0,dk=0;
    scl1(n);
    for(j=1; j<=n; j++){
        scl2(a,b);
        if(a>=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
