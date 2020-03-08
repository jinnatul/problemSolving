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
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932


int main()
{
    int n,m,i=0,j,a=0,b=0,k,ln=0,ck=0,t;
    sc1(n);
    string arr;
    getline(cin, arr);

    for(i=1; i<=n; i++){
        getline(cin, arr);
        a = arr.find("miao.");
        reverse(arr.begin(), arr.end());
        b = arr.find(".alal");

        if(a==0 && b!=0) cout<<"Rainbow's"<<endl;
        else if(a!=0 && b==0) cout<<"Freda's"<<endl;
        else cout<<"OMG>.< I don't know!"<<endl;
    }
}