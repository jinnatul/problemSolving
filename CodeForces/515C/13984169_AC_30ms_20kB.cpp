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

   ll i,j,dk=0,n,m,a,aa,bb,ck=1;
   scl1(a);
   cin>>n;

   while(n>0){
    aa = n%10;
    if(aa==1)
        brr+="";
    else if(aa==2)
        brr+="2";
    else if(aa==3)
        brr+="3";
    else if(aa==4)
        brr+="322";
    else if(aa==5)
        brr+="5";
    else if(aa==6)
        brr+="53";
    else if(aa==7)
        brr+="7";
    else if(aa==8)
        brr+="7222";
    else if(aa==9)
        brr+="7332";
    n/=10;
   }
   sort(brr.begin(), brr.end());
   reverse(brr.begin(), brr.end());
   cout<<brr<<endl;
}
