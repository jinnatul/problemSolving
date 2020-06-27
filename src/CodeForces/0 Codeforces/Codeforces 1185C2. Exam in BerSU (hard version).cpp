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

int cnt[107];

int main()
{

    int m, tc, num, t = 1;

    cin >> num >> m;

    for(int i = 1; i <= num; i++) {
        int x;
        cin >> x;
        int dif = m - x;
        int ans = 0;
        for (int j = 1; j <= 100 && dif >= j; j++) {
            int minn = min(dif / j, cnt[j]);
            ans += minn;
            dif-= minn * j;
        }

        cnt[x]++;
        cout << i - 1 - ans << (i < num ? ' ' : '\n');
    }
}
