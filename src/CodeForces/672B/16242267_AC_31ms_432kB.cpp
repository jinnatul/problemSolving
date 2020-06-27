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


#define mx 1000005
#define mod 10000007


set<char>st;

int main()
{

    ll n,m,t,i,j,ck,dk;
    sc1(n);
    char xx;
    m=n;
    if(n>26) return cout<<"-1"<<endl,0;
    for(i=0; i<n; i++){
        cin>>xx;
        st.insert(xx);
    }

    cout<<m-st.size()<<endl;

}