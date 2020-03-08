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

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 100005
#define pb push_back

ll m, tc, num, t = 1,temp_sum, total;
ll arr[105], save[105];

ll pow_cal(ll num, ll cnt)
{
    while (!(num & 1)){
        cnt++;
        num >>= 1;
    }
    return cnt;
}

int main()
{

    sc1(tc);
    while (tc--){

        sc1(num);

        for(ll i = 1; i <= num; i++) {
            sc1(arr[i]);
        }

        memset(save, 0, sizeof(save));

        arr[0] = 0;
        ll ans = 0;
        for(ll i = 1; i <= num; i++){
            ll cnt = pow_cal(arr[i], 0);
            for(ll j = 0; j < i; j++){
                if(arr[j] < arr[i]){
                    save[i] = max(save[i], save[j] + cnt);
                }
            }

            if(save[i] > ans) ans = save[i];
        }

        pf1(ans);
    }
}
