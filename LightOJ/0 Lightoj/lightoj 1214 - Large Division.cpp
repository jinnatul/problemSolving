#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)

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
        string str;
        cin >> str >> num;
        case;

        ll pos = 0;
        if(str[0] == '-') pos = 1;

        ll temp = 0;
        for (ll i = pos; i < str.length(); ++i) {
            temp = (temp * 10) + (str[i] - '0');
            temp %= num;
        }

        if(temp) cout << "not divisible" << endl;
        else cout << "divisible" << endl;
    }

}
