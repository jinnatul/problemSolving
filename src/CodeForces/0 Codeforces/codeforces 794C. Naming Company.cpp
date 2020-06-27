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

#define size1 300001

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

char ans[size1];

int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll n, m, tc, num, t = 1;

    string str1, str2;
    cin >> str1 >> str2;

    ll ln = str1.length();

    sort(str1.begin(), str1.end());
    sort(str2.rbegin(), str2.rend());

    ll firstPos = 0, lastPos = ln - 1;
    ll str1posFirst = 0, str1posLast = (ln + 1) / 2 - 1;
    ll str2posFirst = 0, str2posLast = (ln / 2) - 1;
    for (ll i = 0; i < ln; ++i) {
        if(i & 1) {
            if(str1[str1posFirst] < str2[str2posFirst]){
                ans[firstPos++] = str2[str2posFirst++];
            }
            else{
                ans[lastPos--] = str2[str2posLast--];
            }
        }
        else {
            if(str1[str1posFirst] < str2[str2posFirst]){
                ans[firstPos++] = str1[str1posFirst++];
            }
            else{
                ans[lastPos--] = str1[str1posLast--];
            }
        }
    }

    for (ll i = 0; i < ln; ++i) {
        cout << ans[i];
    }
    cout << endl;
}
