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

int main()
{

    ll m, tc, num, t = 1;

    sc1(num);

    while(num--) {
         ll arr[10];
         for(ll i = 0; i < 10; i++)
            sc1(arr[i]);

          bool check = false;
          for(ll i = 1; i < 10; i++){
                if(arr[i] == 0) {
                    cout << i << endl;
                    check = true;
                    break;
                }
          }
          if(check == false) {
              if(arr[0] == 0){
                 cout << 10 << endl;
              }
              else {
                    ll ext = 1;
                    ll mnnn = arr[0] + ext;
                    for(ll i = 9; i >= 1; i--) {
                        mnnn = min(mnnn, arr[i]);
                    }
                    if(mnnn == arr[0] + ext) {
                        cout << 10;
                        while(arr[0]--)
                            cout << 0;
                            cout << '\n';
                            continue;
                    }

                    for(ll i = 1; i < 10; i++) {
                        if(mnnn == arr[i]) {
                            while(arr[i]--)
                                cout << i;
                            cout << i << endl;
                            break;
                        }
                    }
              }
          }
    }
}
