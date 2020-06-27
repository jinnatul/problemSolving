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

#define mx1 5005

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

map <char, ll> mp;

int main()
{
    ll m, tc, t = 1;

    //freopen("/media/morol/574830c2-aaf8-40d8-9a94-7a029a2e831f/coding/clion/p1/output.txt", "w", stdout);

    freopen("hello.in", "r", stdin);

    sc1(tc);

    while (tc--){

        ll arr[12], brr[12];

        for(ll i = 0; i < 12; i++){
            sc1(arr[i]);
            brr[i] = arr[i];
        }

        sort(brr, brr + 12);

        ll ck = 0;
        for(ll i = 0; i < 4; i++){
            if(arr[i] == brr[i]) ck++;
        }

     //   bool ans = false;

     //   if(arr[3] < arr[4]) ans = true;

        if(ck == 4) cout << "yes" << endl;
        else cout << "no" << endl;


    }

    return 0;

}