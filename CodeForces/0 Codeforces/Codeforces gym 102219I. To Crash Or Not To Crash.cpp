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

#define size1 998244353
#define pb push_back

int main()
{

    ll m, tc, num, t = 1;

    string aa, bb, cc;

    cin >> aa >> bb >> cc;

    ll pos = 0, ck = 0;
    for(ll i = 0; i < 10; i++){
        if(aa[i] == '='){
            pos = i;
            ck = 1;
            break;
        }
        if(bb[i] == '='){
            pos = i;
            ck = 2;
            break;
        }
        if(cc[i] == '='){
            pos = i;
            ck = 3;
            break;
        }
    }

    if(ck == 1){
        for(ll i = pos + 1; i < 10; i++){
            if(aa[i] != '.') return cout << aa[i] << endl, 0;
        }
    }
    if(ck == 2){
        for(ll i = pos + 1; i < 10; i++){
            if(bb[i] != '.') return cout << bb[i] << endl, 0;
        }
    }
    if(ck == 3){
        for(ll i = pos + 1; i < 10; i++){
            if(cc[i] != '.') return cout << cc[i] << endl, 0;
        }
    }

    cout << "You shall pass!!!" << endl;
}
