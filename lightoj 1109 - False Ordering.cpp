#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)

#define size1 1005

#define pb push_back
#define ff first
#define ss second
#define mp make_pair

/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

inline bool cmp(pll a,pll b){ if(a.ss == b.ss)return a.ff > b.ff; return a.ss < b.ss; }

#define case cout << "Case " << t++ << ": "

bool check[size1 + 1];

void seive()
{
    memset(check, true, sizeof(check));
    for(ll i = 4; i < size1; i += 2) check[i] = false;

    check[0] = check[1] = false;

    for(ll i = 3; i * i < size1; i+=2){
        if(check[i]){
            for(ll j = i * i; j < size1; j += (2 * i)) check[j] = false;
        }
    }
}

ll call(ll num)
{
    ll total = 1;
    for (ll i = 2; i <= num; ++i) {
        if(check[i]) {
            ll cnt = 0;
            if(num % i == 0) {
                while (num % i == 0) {
                    num /= i;
                    cnt++;
                }
                total *= (cnt + 1);
            }
        }
    }
    return total;
}

int main() {

    seive();

    ll n, m, num, tc, t = 1;

    vpll vp;
    for (ll i = 1; i <= 1000; ++i) {
        vp.pb(mp(i, call(i)));
    }

    sort(vp.begin(), vp.end(), cmp);

    sc1(tc);
    while (tc--) {
        sc1(num);
        case;
        cout << vp[num - 1].ff << endl;
    }

}
