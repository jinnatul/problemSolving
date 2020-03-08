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

#define mx 100007
#define mod 1000000007
#define PI acos(-1.0)
#define size1 100005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";

typedef vector <ll> vll;
typedef set <ll> sll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;

ll cost[mx], parent[mx];

ll findParent(ll child)
{
    if(parent[child] == child) return child;
    return parent[child] = findParent(parent[child]);
}

mll mpp;

int main() {

    ll m, tc, num, t = 1;

    sc2(num, m);

    for (ll i = 0; i < mx; ++i)
        parent[i] = i;

    for (ll i = 1; i <= num; ++i)
        sc1(cost[i]);


    while (m--) {
        ll left, right;
        sc2(left, right);

        ll leftParent = findParent(left);
        ll rightParent = findParent(right);

        if(leftParent != rightParent)
            parent[leftParent] = rightParent;
    }

    for (ll i = 1; i <= num; ++i) {
        ll parent = findParent(i);

        if(mpp.find(parent) != mpp.end())
            mpp[parent] = min(mpp[parent], cost[i]);
        else
            mpp[parent] = cost[i];

    }

    ll sum = 0;

    for(auto it : mpp) sum += (ll)it.second;

    pf1(sum);
}