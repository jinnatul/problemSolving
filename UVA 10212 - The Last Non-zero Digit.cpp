/*
Given the high time limit (10 seconds) and the moderate bound on N, it's OK to do this in O(N).

Multiply all numbers from N to N-M+1 together to get NPM. Of course, this will be extremely large, 
so after every multiplication, keep taking % 10 while possible to remove trailing zeros, 
and then take % 1000000000 to keep only the necessary non-zero digits. You need to keep 
one more digit than the largest digit you multiply by to avoid losing information.

Use longs for all calculations. In the end, output the result % 10.

Watch out for M = 0. Output 1 in this case.

*/

#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll N, M;
    while(cin >> N >> M){

        if(M == 0){
            cout << 1 << endl;
            continue;
        }

        ll ans = 1;
        for(ll i = N; i >= N - M + 1; i--) {
            ans *= i;

            while (ans % 10 == 0) ans /= 10;

            ans %= 10000000000;

        }
        cout << ans % 10 << endl;
    }

    return 0;
}
