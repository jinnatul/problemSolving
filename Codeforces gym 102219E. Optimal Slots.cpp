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


#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 100005
#define pb push_back

ll m, tc, num, t = 1,temp_sum, total;
ll arr[size1];

vector <ll> vc, ans;

void BT(ll pos, ll sum)
{
    if(pos == num){
        if(sum > temp_sum){
            temp_sum = sum;
            ans = vc;
        }
        return;
    }

    if(sum + arr[pos] <= total){
        vc.push_back(arr[pos]);
        BT(pos + 1, sum + arr[pos]);
        vc.pop_back();
    }

    BT(pos + 1, sum);
}

int main()
{

    while (cin >> total && total){

        sc1(num);

        for(ll i = 0; i < num; i++) {
            sc1(arr[i]);
        }

        vc.clear();
        ans.clear();
        temp_sum = 0;

        BT(0, 0);

        for(ll i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        pf1(temp_sum);
    }
}
