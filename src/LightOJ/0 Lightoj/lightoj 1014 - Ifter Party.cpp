#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');


#define pb push_back

/*** STLs ***/
typedef vector <ll> vll;

#define case cout << "Case " << t++ << ": "

int main() {

    ll n, m, num, tc, t = 1;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);
    while (tc--) {
        sc2(n, m);
        ll dif = n - m;
        case;
        if(dif < m) {
            cout << "impossible" << endl;
            continue;
        }

        if(n == 0 && m == 0) {
            cout << 1 << endl;
            continue;
        }
        vll vc;
        num = dif;

        for (ll i = 1; i <= sqrt(num + 0.1); ++i) {
            if(num % i == 0) {
                if(i == num / i) {
                    if(i > m)
                        vc.pb(i);
                }
                else {
                    if(i > m)
                        vc.pb(i);
                    if(num / i > m)
                        vc.pb(num / i);
                }
            }
        }
        sort(vc.begin(), vc.end());

        if(vc.size() > 0)
            vpnt(vc)
        else
            cout << "impossible" << endl;
    }

}
