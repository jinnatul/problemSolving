#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;
typedef unsigned long ul;
typedef unsigned long long ull;

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

   ll i,j=0,k,n,m,a=0,t,b=0,ck=0;
   scl1(n);
   string arr;
   cin>>arr;
   sort(arr.begin(), arr.end());
   reverse(arr.begin(), arr.end());

   for(i=0; i<arr.size(); i++){
    if(arr[i]=='1' && arr[i+1]=='1')
        continue;
    else
        cout<<arr[i];
   }
   cout<<endl;
}
