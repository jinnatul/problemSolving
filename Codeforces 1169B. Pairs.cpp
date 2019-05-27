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

ll first[size1], sec[size1], n, m;

bool calculate(ll x, ll y){

    for(ll i = 0; i < m; i++){
        if(first[i] == x || first[i] == y || sec[i] == x || sec[i] == y) continue;
        else return false;
    }
    return true;
}

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc2(n, m);

    for(ll i = 0; i < m; i++){
        sc2(first[i], sec[i]);
    }

    if(m == 1) return cout << "YES" << endl,0;

    for(ll i = 1; i < m; i++){
        if(first[i] == first[0] || first[i] == sec[0] || sec[i] == first[0] ||sec[i] == sec[0]){
            continue;
        }


        if(calculate(first[i], first[0])) return cout << "YES" << endl,0;
        if(calculate(first[i], sec[0])) return cout << "YES" << endl,0;
        if(calculate(sec[i], first[0])) return cout << "YES" << endl,0;
        if(calculate(sec[i], sec[0])) return cout << "YES" << endl,0;
        return cout << "NO" << endl, 0;
    }

    cout << "YES" << endl;

    return 0;
}
