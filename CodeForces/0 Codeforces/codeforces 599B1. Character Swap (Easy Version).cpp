#include <bits/stdc++.h>
using namespace std;
 
typedef long long           ll;
typedef long double         ld;
typedef unsigned long       ul;
typedef unsigned long long  ull;
typedef vector<ll>          vll;
typedef vector<int>         vi;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef pair<ld,ld>         pld;
typedef vector< pii >       vii;
 
#define fastIO              ios::sync_with_stdio(false);    cin.tie(nullptr);   cout.tie(nullptr)
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#pragma G++ optimize("Ofast,no-stack-protector")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma G++ optimize("unroll-loops")
 
#define MX                  INT_MAX
#define MN                  INT_MIN
#define MAX                 200005
#define MOD                 1000000007
#define eps                 1e-9
#define INF                 0x3f3f3f3f3f3f3f3f /// 4,557,430,888,798,830,399
#define inf                 0x3f3f3f3f /// 1,061,109,567
#define PI                  acos(-1.0)  /// 3.1415926535897932
 
#define pb                  push_back
#define ppb                 pop_back
#define mp                  make_pair
#define ff                  first
#define ss                  second
#define sf                  scanf
#define pf                  printf
#define pn                  pf("\n")
#define sfi(x)              sf("%d", &x)
#define sfii(x, y)          sf("%d %d", &x, &y)
#define sfiii(x, y, z)      sf("%d %d %d", &x, &y, &z)
#define sfl(x)              sf("%lld", &x)
#define sfll(x, y)          sf("%lld %lld", &x, &y)
#define sflll(x, y, z)      sf("%lld %lld %lld", &x, &y, &z)
#define pfi(x)              pf("%d\n", x)
#define pfii(x, y)          pf("%d %d\n", x, y)
#define pfiii(x, y, z)      pf("%d %d %d\n", x, y, z)
#define pfl(x)              pf("%lld\n", x)
#define pfll(x, y)          pf("%lld %lld\n", x, y)
#define pflll(x, y, z)      pf("%lld %lld %lld\n", x, y, z)
#define gl(a)               getline(cin,a)
#define pfs(a)              pf("%s\n", a)
#define pfc(a)              pf("%c", a)
#define yes                 pf("YES\n")
#define no                  pf("NO\n")
 
#define input               freopen("input.txt","r",stdin);
#define output              freopen("output.txt","w",stdout);
/* //////////////////////////START\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ */
int main()
{
 
    int t;
    sfi(t);
    while(t--){
        int n, i, flag=1;
        string a, b;
        sfi(n);
        cin >> a;
        cin >> b;
        int cnt=0;
        vi vc;
        for(i=0; i<n; i++){
            if(a[i]!=b[i]){
                cnt++;
                vc.pb(i);
            }
        }
        if(cnt>2 || vc.size()<2){
            no;
        }
        else{
            if(a[vc[0]]==a[vc[1]] && b[vc[1]]==b[vc[0]]) yes;
            else no;
        }
    }
 
    return 0;
}
