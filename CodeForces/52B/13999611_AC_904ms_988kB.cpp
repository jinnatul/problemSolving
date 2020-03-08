#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector< pii > vii;


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


ll fact(ll n);

string brr="";

int main(){

   ll i,j,dk=0,n,m,a,d,l,k,b,c,ck=0,loc1=0, loc2=0;
   scl2(n,m);
   char arr[1000][1000];
   ll aa[1000], bb[1000];
   memset(aa, 0 , sizeof(aa));
   memset(bb, 0, sizeof(bb));

   for(i=0; i<n; i++){
     for(j=0; j<m; j++){
        cin>>arr[i][j];
        if(arr[i][j]=='*'){
            aa[i]++;
            bb[j]++;
        }
     }
   }

   for(i=0; i<n; i++){
     for(j=0; j<m; j++){
         if(arr[i][j]=='*'){
            ck+=((aa[i]-1)*(bb[j]-1));
         }
     }
   }

   cout<<ck<<endl;
}
