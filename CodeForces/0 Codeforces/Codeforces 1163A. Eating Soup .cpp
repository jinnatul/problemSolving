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

    ll n, m;

    sc2(n, m);

    if(m == 1 || m == 0){
        return cout << "1" << endl, 0;
    }
    if(m == n){
        return cout << "0" << endl, 0;
    }

    ll ext = abs(n - m);


    if(ext + m == n)
      cout << min(ext, m) << endl;

    return 0;
}

