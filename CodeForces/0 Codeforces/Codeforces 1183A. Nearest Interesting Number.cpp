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

ll sum(ll num)
{
    ll sum = 0;
    while (num != 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc1(num);

    while (sum(num) % 4 != 0){
        num++;
    }

    pf1(num);

}
