#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native"
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 300005


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    ll sum1 = 0, sum2 = 0;

    sc1(tc);

    while (tc--){

        ll n, a, b;

        cin >> n >> a >> b;

        if(n == 1){
            sum1 += a - b;
        }
        else{
            sum2 += a - b;
        }
    }

    if(sum1 >= 0) cout << "LIVE" << endl;
    else cout << "DEAD" << endl;


    if(sum2 >= 0)  cout << "LIVE" << endl;
    else cout << "DEAD" << endl;

    return 0;
}