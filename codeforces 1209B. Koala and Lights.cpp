#include<bits/stdc++.h>

using namespace std;

#define FastIO      ios_base::sync_with_stdio(false); cin.tie(0);

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)
#define size1 105

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(arrayName, setVal) memset(arrayName,  setVal, sizeof(arrayName))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";


ll m, n, tc, num, t = 1;
ll a[size1], b[size1];
bool on[size1];

int main()
{

    sc1(num);

    string arr;
    cin >> arr;

    for (ll i = 1; i <= num; ++i) {
        sc2(a[i], b[i]);
        on[i] = (arr[i - 1] - '0');
    }

    ll ans  = 0;

    for (ll t = 0; t < mx; ++t) {
        ll cnt = 0;
        for (ll i = 1; i <= num; ++i) {
            if(t >= b[i] && ((t % a[i]) == (b[i] % a[i]))) on[i] ^= 1;
            cnt += on[i];
        }
        ans = max(ans, cnt);
        //cout << cnt << endl;
    }

    pf1(ans);
}
