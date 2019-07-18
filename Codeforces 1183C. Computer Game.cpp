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


int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc1(tc);

    while (tc--){

        ll k, n, a, b;
        sc2(k, n);
        sc2(a, b);

        ll ans = 0;
        if(min(a, b) * n >= k){
            cout << "-1" << endl;
            continue;
        }
        else {

            ll left = 0, right = n;

            while (left <= right){
                ll mid = (left + right) / 2;
                ll xx = mid * a;
                ll yy = (n - mid) * b;
                if(xx + yy < k){
                    ans = mid;
                    left = mid + 1;
                }
                else right = mid - 1;
            }

        }

        pf1(ans);
    }
}
