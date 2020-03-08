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
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

/// Constants
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932



int main()
{

    ll n,a,j,i,t,ck=0;
    scl1(t);
    while(t--){
    scl1(n);
    map<int, int>my;

    for(j=1; j<=n; j++){
       a = j;
       while(a!=0){
          ck = a%10;
          my[ck]++;
          a/=10;
       }
    }

    for(i=0; i<9; i++){
        cout<<my[i]<<" ";
    }
    cout<<my[9]<<endl;

    }
}
