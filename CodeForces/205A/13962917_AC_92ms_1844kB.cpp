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

//Other
#define co cout
#define el endl

/// Constants
#define Max                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932




int main()
{
     ll n,m,i,j,ck=0,a;
     ll arr[100002],brr[100002];

     scl1(n);

    for(i=0; i<n; i++){
        scl1(arr[i]);
        brr[i] = arr[i];
     }

    sort(arr, arr+n);

    if(arr[1]==arr[0]){
        cout<<"Still Rozdil"<<endl;
    }
    else{
        for(i=0; i<n; i++){
            if(brr[i]==arr[0]){
                cout<<i+1<<endl;
                break;
            }
        }
    }

}