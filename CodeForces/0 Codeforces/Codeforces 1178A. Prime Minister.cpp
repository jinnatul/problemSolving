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

    ll k, prime, m, tc, num, t = 4;

    sc1(num);

    ll arr[num], sum = 0;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
        sum += arr[i];
    }

    vector <ll> vc;
    ll sum2 = 0;
    for(ll i = 0; i < num; i++){
        if(i == 0 || arr[i] * 2 <= arr[0]){
            vc.push_back(i + 1);
            sum2 += arr[i];
        }
    }


    if(sum2 * 2 > sum){
        cout << vc.size() << endl;
        for(ll i = 0; i < vc.size(); i++){
            cout << vc[i] << (i + 1 < vc.size() ? ' ' : '\n');
        }
    }
    else cout << "0" << endl;

}
