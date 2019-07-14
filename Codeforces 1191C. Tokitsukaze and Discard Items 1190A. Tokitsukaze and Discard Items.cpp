#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

#define size1 1000
#define pb push_back

vector <ll> vc;

int main()
{
    ll k, num, m, tc, t = 1;

    sc2(num, m);
    sc1(k);

    for(ll i = 0 ; i < m; i++){
        sc1(tc);
        vc.push_back(tc - 1);
    }

    ll last = vc[0], ans = 1, pos = 0;

    for(ll i = 1; i < m; i++){
        if(((last - pos) / k) != ((vc[i] - pos) / k)){
            ans++;
            pos = i;
            last = vc[i];
        }
        //cout << pos << " " << ans << endl;
    }

    pf1(ans);
}
