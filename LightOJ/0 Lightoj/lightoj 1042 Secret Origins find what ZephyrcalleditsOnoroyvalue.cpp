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

    sc1(tc);

    while (tc--){
        sc1(num);
        string arr = "";

        while (num){
            if(num & 1) arr += '1';
            else arr += '0';
            num /= 2;
        }
        arr += '0';
        reverse(arr.begin(), arr.end());
        next_permutation(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        ll ans = 0, now = 1;
        for(ll i = 0; i < arr.size(); i++){
            if(arr[i] == '1') ans += now;
            now *= 2;
        }

        cout << "Case " << t++ << ": ";
        pf1(ans);
    }

    return 0;
}
