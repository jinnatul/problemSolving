#include<bits/stdc++.h>
 
using namespace std;
 
/// Typedef
typedef long long ll;
 
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
 
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
 
#define mx 100007
#define mod 100000007
#define PI acos(-1.0)
 
#define size1
#define pb push_back
 
ll rownum[mx], colnum[mx];
string arr[mx];
 
int main()
{
 
    ll k, num, m, tc, t = 1;
 
    sc1(tc);
 
    while (tc--){
 
        ll row, col;
        sc2(row, col);
 
        for (ll i = 0; i < row; i++) cin >> arr[i];
 
        ll ans = INT_MAX;
 
        for (ll i = 0; i < row; i++) rownum[i] = 0;
        for (ll i = 0; i < col; i++) colnum[i] = 0;
 
        for(ll i = 0; i < row; i++){
            for(ll j = 0; j < col; j++){
                if(arr[i][j] == '.'){
                    rownum[i]++;
                    colnum[j]++;
                }
            }
        }
 
        for(ll i = 0; i < row; i++){
            for(ll j = 0; j < col; j++){
                ll sum = rownum[i] + colnum[j];
                if (arr[i][j] == '.') sum--;
                ans = min(ans, sum);
            }
        }
 
        pf1(ans);
    }
}
