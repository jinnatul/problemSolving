#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

int main()
{
    ll num, m, tc = 1;

   // freopen("/media/morol/574830c2-aaf8-40d8-9a94-7a029a2e831f/coding/clion/p1/output.txt", "w", stdout);

   ll neg;
   sc2(num, neg);

   ll arr[num], brr[num + 1];
   brr[0] = 0;

   for(ll i = 1; i <=num; i++){
       sc1(arr[i]);
       brr[i] = brr[i-1] + arr[i];
   }

   if(num == 1)
       return cout << neg << endl,0;

   ll left =0, right = 0, now = 0;

   for(ll i = 1; i <= num; i++){
       left = brr[i-1];
       right = brr[num] - brr[i];
       now = left + right + neg;

       ll ans = max(now, max(right, left));

       cout << ans << " ";
   }

   cout << endl;

    return 0;

}