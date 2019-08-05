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

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 998244353
#define pb push_back

int main()
{

    ll m, tc, num, t = 1;

    sc1(num);

    for(ll i = 1; i <= num; i++) {
        if(i == 1){
            for(ll j = 1; j <= num; j++){
                if(j == 1 || j == num){
                    cout << "*";
                }
                else cout << " ";
            }
            cout << " ";
            for(ll j = 1; j <= num; j++){
                cout << "*";
            }
            cout << endl;
            continue;
        }

        else if(i == num){
            for(ll j = 1; j <= num; j++){
               cout << "*";
            }
            cout << " ";
            for(ll j = 1; j <= num; j++){
                if(j == 1 || j == num){
                    cout << "*";
                }
                else cout << " ";
            }
            cout << endl;
            continue;
        }
        else{
            for(ll j = 1; j <= num; j++){
                if(j == 1 || j == num){
                    cout << "*";
                }
                else cout << " ";
            }
            cout << " ";
            for(ll j = 1; j <= num; j++){
                if(j == 1 || j == num){
                    cout << "*";
                }
                else cout << " ";
            }
            cout << endl;
        }

    }

}
