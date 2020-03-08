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

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll arr[num];

    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }


    ll ans = 0;
    for(ll i = 0; i < num - 1; i++){

        if(arr[i] != 1 && arr[i +1] != 1){
            return cout << "Infinite" << endl,0;
        }

        if(arr[i] + arr[i + 1] == 3) ans += 3;
        else ans += 4;
    }

    for(ll i = 0; i < num - 2; i++){
        if(arr[i] == 3 && arr[i + 1] == 1 && arr[i + 2] == 2){
            ans--;
        }
    }

    cout << "Finite" << endl;
    pf1(ans);

    return 0;
}
