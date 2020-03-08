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
     ll i,j=0,k,n=0,m=0,ln,t=0,a=0,b,c,d,ck=0,dk=0;
     scl1(n);
     ll arr[n];
   //  map<int, int>my;
    // map<int, int> :: iterator it;
     for(i=0; i<n; i++){
        scl1(arr[i]);
     }

     for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                arr[i]=0;
            }
        }
     }
     for(i=0; i<n; i++){
        if(arr[i]>0)
            ck++;
     }
     cout<<ck<<endl;

     for(i=0; i<n; i++){
        if(arr[i]>0)
            cout<<arr[i]<<" ";
     }
     cout<<endl;
}
