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

int arr[5000],ck=0;

int main()
{
     int i,j=0,n=0,m=0,ln,t=0,k=0,dk=0;

     sc1(t);
     while(t--){
        sc1(n);
        n+=n;
        for(i=0; i<n; i++){
            scl1(arr[i]);
        }
        ck=0;
        for(i=0; i<n; i++){

          ck = max(ck, arr[i]+arr[n-i-1]);
        }

        printf("%d\n", ck);
        n=0,ck=0;
     }

}
