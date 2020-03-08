#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1
#define pb push_back

ll disjecnt[mx];

int main()
{

    ll k, num, m, tc, t = 1;

    sc1(num);

    for(ll i = 1; i < num; i++){
       ll u, v;
       sc2(u, v);
       disjecnt[u]++;
       disjecnt[v]++;
    }

    for(ll i = 1; i <= num; i++){

        if(disjecnt[i] == 2){
            return cout << "NO" << endl, 0;
        }
    }

    cout << "YES" << endl;

}
