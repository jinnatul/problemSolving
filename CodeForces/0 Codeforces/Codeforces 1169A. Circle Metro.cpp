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

#define size1 105

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, a, x, b, y;

    cin >> n >> a >> x >> b >> y;

    a--,x--,b--,y--;

    if(a == b) return cout << "YES" << endl,0;

    while (true){

        if(a == b) return cout << "YES" << endl,0;

        if(a == x || b == y) break;

        a = (a + 1) % n;
        b = (b - 1 + n) % n;
    }

    cout << "NO" << endl;

    return 0;
}




OR


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

#define size1 105

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    ll n, a, x, b, y;

    cin >> n >> a >> x >> b >> y;

    if(a == b) return cout << "YES" << endl,0;

    while (true){

        if(a == b) return cout << "YES" << endl,0;

        if(a == x || b == y) break;

        if(a < n) a++;
        else a = 1;

        if(b > 1) b--;
        else b = n;
    }

    cout << "NO" << endl;

    return 0;
}
