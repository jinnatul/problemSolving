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

    int a,n,b,i,ck=0,aa=0;
    sc1(n);
    int arr[n];

    for(i=0; i<n; i++){
        sc1(arr[i]);
    }

    for(i=0; i<n; i++){
        ck+=abs(aa-arr[i])+2;
        aa = arr[i];
    }

    cout<<ck-1<<endl;

}
