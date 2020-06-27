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


int main()
{
     ll a,b,i,j,n,t,k=1,ck=0;
     char aa,bb;
     ll arr[105][105],brr[105][105];
     scl1(t);
     while(t--){
        cin>>aa>>bb>>n;
        ck=0;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scl1(arr[i][j]);
                if(arr[i][j]<0)
                    ck=1;
            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<n-i; j++){
                if(arr[i][j]!=arr[n-1-i][n-1-j]){
                    ck=1;

                }
            }
        }

        if(ck)
            printf("Test #%lld: Non-symmetric.\n", k++);
        else
             printf("Test #%lld: Symmetric.\n", k++);

     }
}
