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

    ll n,m,i=0,j=0,t,ck=0,b,t1,t2,f,a,c,ct1,ct2,ct3;

    scl1(n);
    ll arr[3];
    for(i=1; i<=n; i++){
        cin>>t1>>t2>>f>>a;
        for(j=0; j<3; j++) scl1(arr[j]);

        sort(arr, arr+3);

        c = (arr[1]+arr[2])/2;
        ck = (t1+t2+f+a+c);
        printf("Case %lld: ", i);
        if(ck>=90)
            cout<<"A"<<endl;
        else if(ck>=80 && ck<90)
            cout<<"B"<<endl;
        else if(ck>=70 && ck<80)
            cout<<"C"<<endl;
        else if(ck>=60 && ck<70)
            cout<<"D"<<endl;
        else
            cout<<"F"<<endl;
    }
}
