#include<bits/stdc++.h>

using namespace std;

/*** Optimization ***/
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/*** Typedef ***/
typedef long long ll;
typedef unsigned long long ull;

/*** Input Output ***/
#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

/*** Loops ***/
#define foR0(num) for(ll i = 0; i < num; i++)
#define foR1(num) for(ll i = 1; i <= num; i++)
#define foRev(num) for(ll i = num - 1; i >= 0; i--)
#define forIn(arr, num) for(ll i = 0; i < num; i++) sc1(arr[i]);
#define forIn1(arr, num) for(ll i = 1; i <= num; i++) sc1(arr[i]);
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

/*** Define Values ***/
#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7
#define size1 505

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))


/*** Some Prints ***/
#define en cout << '\n';
#define no cout << "NO" << '\n';
#define yes cout << "YES" << '\n';
#define case cout << "Case " << t++ << ": ";

/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

/*** Sorts ***/
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtGreat(v) sort(all(v), greater<ll>())
//inline bool cmp(pll a,pll b){ if(a.ff == b.ff)return a.ss > b.ss; return a.ff > b.ff; }

int main() {

    #ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
    #endif

    ll tc, n, m, num,re;

    sc1(tc);
    while(tc--) {
        sc1(num);
        mll mpp;
        while(num--) {
            string str;
            cin >> str >> m;
            mpp[m]++;
        }
        vpll vc;
        for(auto it = mpp.begin(); it != mpp.end(); it++) {
            vc.pb(mp(it->second, it->first));
            //cout << it->first << " " << it->second << endl;
        }
        sort(vc.begin(), vc.end());

        ll mnn = vc[vc.size() - 1].first;

        for(ll i = vc.size() - 1; i >= 0; i--) {
            if(vc[i].first==mnn)re=vc[i].second;
            else break;
        }
        cout<<re<<endl;
    }

    #ifndef ONLINE_JUDGE
        printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif
}
