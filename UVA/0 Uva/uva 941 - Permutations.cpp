#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7

#define size1 200010

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

inline bool cmp(pll a,pll b){ if(a.ff == b.ff)return a.ss < b.ss; return a.ff > b.ff; }

ll factSave[25];
void fact()
{
    factSave[0] = factSave[1] = 1;
    for (ll i = 2; i <= 20; ++i) {
        factSave[i] = factSave[i - 1] * i;
    }
}

string perMutation(string str, ll nThPer)
{
    ll ln = str.length();
    if(ln == 1) return str;

    ll unitPos = factSave[ln - 1];
    ll removeCharPos = (nThPer - 1) / unitPos;
    char removeChar = str[removeCharPos];
    str.erase(str.begin() + removeCharPos);

    if(nThPer % unitPos) nThPer = nThPer % unitPos;
    else nThPer = unitPos;

    return removeChar + perMutation(str, nThPer);
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, num, tc, t = 1;

    fact();

    sc1(tc);

    while (tc--) {
        string str;
        cin >> str >> num;
        sort(str.begin(), str.end());

        string ans = perMutation(str, num + 1);
        cout << ans << endl;
    }
}
