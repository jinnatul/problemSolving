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



int main(){

   ll i,j,n,m,a=0,b=0,c=0,d=0,e=0,ck=0, last=0;

 /*  ll arr[16];

   for(i=0; i<16; i++){
     scl1(arr[i]);
   }


   for(i=0; i<16; i++){
      if(arr[i]+300>arr[3])
        ck++;
   }

   cout<<ck<<endl;

   */
  string arr;
   cin>>arr;
   int ln = arr.size();

   for(i=0; i<ln; i++){
     if(arr[i]=='A')
        a++;
     else
        a--;
    if(a<0)
       break;
   }
   if(a==0)
    cout<<"Sim"<<endl;
   else
    cout<<"Nao"<<endl;
}
