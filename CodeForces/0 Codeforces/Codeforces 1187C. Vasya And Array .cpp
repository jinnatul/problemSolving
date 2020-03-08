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

ll arr[mx], test[mx], l[mx], r[mx];

int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc2(num, tc);

    arr[0] = 1;
    for(ll i = 0; i < tc; i++){
        cin >> test[i] >> l[i] >> r[i];

        if(test[i]){
            for(ll j = l[i]; j < r[i]; j++){
                arr[j] = 1;
            }
        }
    }

    for(ll i = 0; i < tc; i++){
        if(!test[i]){
            bool ck = true;
            for(ll j = l[i]; j < r[i]; j++){
                if(!arr[j]) ck = false;
            }
            if(ck) return cout << "NO" << endl,0;
        }
    }

    ll ans = num;
    cout << "YES" << endl;
    for(ll i = 0; i < num; i++){
        if(!arr[i]) ans--;
        cout << ans << " ";
    }

}
