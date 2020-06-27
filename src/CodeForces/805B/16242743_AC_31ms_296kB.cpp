#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c)


#define mx 1001000
#define mod 10000007

vector<ll>vc;

int main()
{

    ll n,m,t=0,i,j,ck=0,dk,a,b,c,ab,ac,bc,abc;

    sc1(n);
    string arr="aabb";
    for(i=0; i<n; i++){
        cout<<arr[i%4];
    }

    cout<<endl;

}
