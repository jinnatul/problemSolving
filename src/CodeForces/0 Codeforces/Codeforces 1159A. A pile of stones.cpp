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

    string arr;
    cin >> arr;

    ll cnt = 0;

    for(ll i = 0; i < num; i++){
        if(arr[i] == '+') cnt++;
        else {
            cnt--;
        }

        if(cnt < 0) cnt = 0;
    }

    pf1(cnt);

    return 0;
}
