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
 
int main()
{
 
    ll k, num, m, tc, t = 1;
 
    sc1(num);
    ll arr[num + 5];
 
    arr[0] = 0;
    for(ll i = 1; i <= num; i++){
        sc1(arr[i]);
        arr[i] += arr[i - 1];
    }
 
    sc1(tc);
 
    while (tc--){
 
        ll left, right;
        sc2(left, right);
 
        ll total = arr[right] - arr[left - 1];
 
        cout << total / 10 << endl;
    }
}
