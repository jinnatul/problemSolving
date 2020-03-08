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

   ll a,t,b,c,d=0,e,a1,b1,c1,d1,e1,j=1,n,i=1,m,ck=0;
   string arr;

     while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld",&a,&b, &c, &d, &e ,&a1,&b1, &c1, &d1, &e1) ==10){

     if(a^a1 && b^b1 && c^c1 && d^d1 && e^e1){
        cout<<"Y"<<endl;
     }
     else{
        cout<<"N"<<endl;
      }
   }
}
