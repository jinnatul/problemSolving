#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105


int main() {

    //seive();
    //preCal();

    ll tc, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll arr[4];

    for(ll i = 0; i < 4; i++){
        sc1(arr[i]);
    }

    sort(arr, arr + 4);

    ll a = arr[3] - arr[0];
    ll b = arr[3] - arr[1];
    ll c = arr[3] - arr[2];

    cout << a << " " << b << " " << c << endl;


    return 0;
}

