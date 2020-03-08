#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;
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
#define scl1(a)             scanf("%ld", &a)
#define scl2(a, b)          scanf("%ld %ld", &a, &b)
#define scl3(a, b, c)       scanf("%ld %ld %ld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%ld %ld %ld %ld", &a, &b, &c, &d)

/// Constants
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932



int main(){

   int n,a,b,i,j,m,ck=0,sum=0;
   sc1(n);
   char arr[n];
   cin>>arr;

   for(i=1; i<n; i++){
     if(arr[i]==arr[i-1])
        ck++;
   }

   cout<<ck<<endl;
}
