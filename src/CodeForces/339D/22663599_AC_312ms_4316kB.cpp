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
#define size1 150005

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

ll arr[size1], Tree[4*mx];

void buildTree(ll node, ll left, ll right, ll pos)
{
    if(left == right) {
        Tree[node] = arr[left];
        return;
    }

    ll midPos = (left + right) >> 1;
    ll leftPos = node * 2;
    ll rightPos = leftPos + 1;

    buildTree(leftPos, left, midPos, pos - 1);
    buildTree(rightPos, midPos + 1, right, pos - 1);

    if(pos & 1) Tree[node] = (Tree[leftPos] | Tree[rightPos]);
    else Tree[node] = (Tree[leftPos] ^ Tree[rightPos]);
}

void updateTree(ll node, ll left, ll right, ll indx, ll value, ll pos)
{
    if(indx > right || indx < left) return;
    if(left >= indx && right <= indx) {
        Tree[node] = value;
        return;
    }

    ll midPos = (left + right) >> 1;
    ll leftPos = node * 2;
    ll rightPos = leftPos + 1;

    updateTree(leftPos, left, midPos, indx, value, pos - 1);
    updateTree(rightPos, midPos + 1, right, indx, value, pos - 1);

    if(pos & 1) Tree[node] = (Tree[leftPos] | Tree[rightPos]);
    else Tree[node] = (Tree[leftPos] ^ Tree[rightPos]);
}

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc2(num, m);

    ll right = pow(2, num);

    for (ll i = 1; i <= right; ++i) {
        sc1(arr[i]);
    }

    buildTree(1, 1, right, num);

    while (m--) {
        ll indx, value;
        sc2(indx, value);
        updateTree(1, 1, right, indx, value, num);

        cout << Tree[1] << '\n';
    }
}