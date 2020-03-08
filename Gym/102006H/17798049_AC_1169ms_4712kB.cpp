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

    freopen("bugged.in", "r", stdin);

    sc1(tc);

    while (tc--){

        ll num, tstcase;

        sc2(num, tstcase);

        ll arr[num], first[num + 5], last[num + 5];

        memset(first, 0, sizeof(first));
        memset(last, 0, sizeof(last));

        for(ll i = 0; i < num; i++){
            sc1(arr[i]);
        }
        
        ll sum = 0;

        while (tstcase--){

            ll left, right;
            sc2(left, right);

            first[left]++;
            last[right]++;

            left--;
            right--;

            sum += abs(arr[left] - arr[right]);

        }

        bool ck = true;
        for(ll i = 0; i < num; i++){
            if(first[i] != last[i]){
                ck = false;
                break;
            }
        }

        if(ck == true) pf1(sum);
        else cout << "-1" << endl;

    }

    return 0;

}