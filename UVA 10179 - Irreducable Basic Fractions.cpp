#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

ll eulerTotientPhi(ll num)
{
    ll ans = num;

    for(ll i = 2; i * i <= num; i++){
        if(num % i == 0){
            while (num % i == 0) num /= i;
            ans -= ans / i;
        }
    }

    if(num > 1) ans -= ans / num;

    return ans;
}

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    while (cin >> num && num){

        pf1(eulerTotientPhi(num));
    }

    return 0;
}
