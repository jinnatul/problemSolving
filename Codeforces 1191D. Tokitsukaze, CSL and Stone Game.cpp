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


int main()
{

    ll k, num, prime, m, tc, t = 1;

    sc1(num);
    ll arr[num];

    ll sum = 0;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
        sum += arr[i] - i;
    }

    sort(arr, arr + num);

    if(num == 1){
        if(arr[0] & 1) cout << "sjfnb"<< endl;
        else cout << "cslnb" << endl;
        return 0;
    }

    bool ck = false;
    for(ll i = 1; i < num; i++){
        if(arr[i] == arr[i - 1]){
            if (arr[i] == 0 || ck) {
                return cout << "cslnb" << endl, 0;
            }

            if(i > 1 && arr[i - 2] + 1 == arr[i - 1]){
                return cout << "cslnb" << endl, 0;
            }
            ck = true;
        }
    }

    //cout << sum << endl;
    if(sum & 1) cout << "sjfnb"<< endl;
    else cout << "cslnb" << endl;

}
