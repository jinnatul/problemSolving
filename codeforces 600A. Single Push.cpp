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
#define size1 200005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define clr(name, value) memset(name, value, sizeof(name))

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


int main() {

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);

    ll m, tc, num, t = 1;

    sc1(tc);

    while (tc--) {
        sc1(num);

        ll arr[num + 5], brr[num + 5];
        for (ll i = 1; i <= num; ++i) {
            sc1(arr[i]);
        }

        bool neg = false;
        for (ll i = 1; i <= num; ++i) {
            sc1(brr[i]);
            if(brr[i] - arr[i] < 0) neg = true;
        }

        if(neg == true) {
            cout << "NO" << endl;
            continue;
        }

        bool ans = true;
        ll dif = 0, pos = 0;
        for(ll i = 1; i <= num; i++){
            if(arr[i] > brr[i]){
                ans = false;
                break;
            }
            if(arr[i]!=brr[i] && arr[i]<brr[i]){
                dif = brr[i] - arr[i];
                pos = i;

                for(int j=i+1; j<=num; j++){
                    if(arr[j]!=brr[j] && arr[j]<brr[j]){
                        if(pos+1==j && brr[j]-arr[j]==dif){
                            pos=j;
                        }
                        else {ans = false; break;}
                    }
                    else if(arr[j] > brr[j]){
                        ans = false;
                        break;
                    }
                }
                break;
            }

        }

        if(ans == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
