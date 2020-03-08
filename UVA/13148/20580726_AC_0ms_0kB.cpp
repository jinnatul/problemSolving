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

#define size1 12
#define pb push_back

pair <ll, ll> ans[mx];

int main()
{

    ll k, num, prime, m, tc, t = 4;

    while (cin >> num && num){
        if(num == 1 || num == 64 || num == 729 || num == 4096 || num == 15625 || num == 46656 || num == 117649
        || num == 262144 || num == 531441 || num == 1000000 || num == 1771561 || num == 2985984 || num == 4826809
        || num == 7529536 || num == 11390625 || num == 16777216 || num == 24137569 || num == 34012224
        || num == 47045881 || num == 64000000 || num == 85766121)
            cout << "Special" << endl;
        else
            cout << "Ordinary" << endl;

    }
}