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

   ll n, k;
   sc2(n, m);
   sc1(k);

   ll arr[n];

   ll same = 0, extra = 0;
   for(ll i = 0; i < n; i++){
       sc1(arr[i]);
       if(arr[i] == m) same = 1;
       if(arr[i] > m) extra++;
   }

   if(extra > k)
       cout << "NO" << endl;
   else if(extra < k)
       cout << "YES" << endl;
   else{
       
       if(same == 1 || k >= 1)
           cout << "YES" << endl;
       else
           cout << "NO" << endl;
   }


    return 0;

}