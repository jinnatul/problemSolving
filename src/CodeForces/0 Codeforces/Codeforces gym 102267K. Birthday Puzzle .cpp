#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

#define size1 32

int main()
{
    ll num, m, tc, t = 1;

    sc1(num);

    ll arr[num];

    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }

    ll cntzero[size1];

    memset(cntzero, 0 , sizeof(cntzero));

    for(ll i = 0; i < 32; i++){
        for(ll j = 0; j < num; j++){
            if(!(arr[j] & 1 << i))
                cntzero[i] += 1;
        }
    }

    ll ans = 0;

    for(ll i = 0; i < 32; i++){
       ans += ((pow(2, num) - 1) -
               (pow(2, cntzero[i]) - 1))
                       * pow(2, i);
    }

    cout << ans << endl;
}
