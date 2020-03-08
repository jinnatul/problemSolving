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

    sc1(tc);

    while (tc--){

        ll cnt = 0;
        sc1(num);

        bool ck = true;
        while (num != 1){

            if(num % 5 == 0) num = (num / 5) * 4;
            else if(num % 3 == 0) num = (num / 3) * 2;
            else if(num % 2 == 0) num /= 2;
            else{
                cout << "-1" << endl;
                ck = false;
                break;
            }
            cnt++;
        }
        if(ck) cout << cnt << endl;
    }

    return 0;
}
