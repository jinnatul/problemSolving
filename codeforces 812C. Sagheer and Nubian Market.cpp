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
#define size1 100005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

ll arr[size1], brr[size1], total, have;

ll call(ll num)
{
    for (ll i = 0; i < total; ++i) {
        brr[i] = arr[i] + (i + 1) * num;
    }

    sort(brr, brr + total);

    ll sum = 0;
    for (ll i = 0; i < num; ++i) {
        sum += brr[i];
        if(sum > have) return -1;
    }
    return sum;
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    sc2(total, have);

    for (ll i = 0; i < total; ++i) {
        sc1(arr[i]);
    }

    ll ans1 = 0, ans2 = 0, low = 0, high = total, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        ll sum = call(mid);
        if(sum == -1){
            high = mid - 1;
        }
        else {
            low = mid + 1;
            ans1 = mid;
            ans2 = sum;
        }
    }

    cout << ans1 << " " << ans2 << endl;
}
