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

    ll i=0,j=0,t,a=0,b,ln;
    double ck = 0.0, dk=0.0,hour,minu,n,m;
    char c;
    while(1){
        cin>>n>>c>>m;
        if(n==0 && m==0) break;
        hour = n*30 + (m/60)*30;
        minu = m*6;
        dk = abs(hour - minu);

        if(dk>180){
         ck = 360 - dk;
         printf("%.3lf\n", ck);
        }
        else
         printf("%.3lf\n", dk);
        ck=0,dk=0;
    }
}
