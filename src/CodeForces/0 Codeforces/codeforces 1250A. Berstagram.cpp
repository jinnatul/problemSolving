#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

typedef vector <ll> vll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;

#define mx 100007
#define mod 1000000007
#define PI acos(-1.0)
#define size1 100005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define case cout << "Case " << t++ << ": ";

ll arr[size1], mxpos[size1], minpos[size1], cur[size1];
void pre(ll num)
{
    for(ll i = 1; i < num; i++) {
        arr[i] = i;
        mxpos[i] = i;
        minpos[i] = i;
        cur[i]=i;
    }
}

int main()
{
    
    ll m, tc, num, t = 1;

    sc2(num, m);
	pre(num+2);
    ll now;
    for(ll i = 1; i <= m; i++) {
        sc1(now);
        ll pos = cur[now];
        if(pos - 1 > 0) {
            swap(arr[pos], arr[pos - 1]);
            cur[now]--;
            cur[arr[pos]]++;
            minpos[now] = min(minpos[now], cur[now]);
            mxpos[now] = max(mxpos[now], cur[now]);
            minpos[arr[pos]]=min(minpos[arr[pos]], cur[arr[pos]]);
            mxpos[arr[pos]]=max(mxpos[arr[pos]], cur[arr[pos]]);
        }

    }

    for(ll i = 1; i <= num; i++) {
        cout << minpos[i] << " " << mxpos[i] << endl;
    }
}
