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

   ll i,j=0,n,m,a=0,b=0,ln=0,t,d=0,e=0,f=0,ck=0, last=0;
   char arr[100];

    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr;
        ln = strlen(arr);
        if(ln== 5)
            cout<<"3"<<endl;
        else {
           ck=0;
           if(arr[0]=='o')
            ck++;
           if(arr[1]=='n')
            ck++;
           if(arr[2]=='e')
            ck++;
        if(ck>=2)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;

        }

    }
}
