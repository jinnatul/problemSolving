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

int main()
{
    ll m, tc, t = 1;

    //freopen("/media/morol/574830c2-aaf8-40d8-9a94-7a029a2e831f/coding/clion/p1/output.txt", "w", stdout);

    freopen("hamming.in", "r", stdin);

    sc1(tc);

    while (tc--){

        ll size;

        sc1(size);

        string arr, brr;

        cin >> arr >> brr;

        sort(arr.begin(), arr.end());

        sort(brr.begin(), brr.end());

        reverse(brr.begin(), brr.end());

        ll ans = 0;
        for(ll i = 0; i < size; i++){
            if(arr[i] != brr[i]) ans++;
        }

        pf1(ans);

    }

    return 0;

}