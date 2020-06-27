#include<bits/stdc++.h>
 
using namespace std;
 
 
/*** Typedef ***/
typedef long long ll;
typedef unsigned long long ull;
 
/*** Input Output ***/
#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
 
#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
 
#define case cout << "Case " << t++ << ": "
 
ll arr[2005];
 
int main() {
 
 
    ll n, m, num, tc, t = 1;
 
    sc1(tc);
    while (tc--) {
        sc1(num);
 
        ll mxx = 0;
 
        for (ll i = 0; i < num; ++i) {
            sc1(arr[i]);
            mxx = max(mxx, arr[i]);
        }
        ll ans = arr[0];
        for (ll i = 1; i < num; ++i) {
            ans ^= arr[i];
        }
 
        case;
        if(mxx == 1) {
            if(num & 1) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
        else if(ans == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
 
    }
 
 
#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
 
}