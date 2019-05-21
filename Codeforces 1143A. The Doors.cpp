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

    ll zero = 0, one = 0;
    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
        if(arr[i] == 0) zero++;
        else one++;
    }

    ll cnt0 = 0, cnt1 = 0;
    for(ll i = 0; i < num; i++){
        if(arr[i] == 1) cnt1++;
        else cnt0++;
        if(zero == cnt0 || one == cnt1){
            return cout << i + 1 << endl,0;
        }
    }


    return 0;
}
