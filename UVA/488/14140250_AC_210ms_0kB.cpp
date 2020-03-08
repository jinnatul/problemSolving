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

   ll a,t,b,c,d=0,j=1,k,n,i=1,m=0,ck=0;
   scl1(t);
   while(t--){
     scl2(n,m);
     for(k=0; k<m; k++){
        for(i=1; i<n; i++){
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
       }
       for(i=n; i>=1; i--){
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
     }if(k!=m-1)
        cout<<endl;
     }if(t)
     cout<<endl;
   }
}
