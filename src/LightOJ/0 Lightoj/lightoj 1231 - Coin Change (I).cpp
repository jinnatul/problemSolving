#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int dp[55][1005];
int coins[55], cointsvalue[55], n, k;

ll call (int pos, int sum) {

    if(sum == k) return 1;
    if(pos == n) return 0;
    if (dp[pos][sum] != -1) return dp[pos][sum];

    int modd = 100000007;
    ll cnt = 0;
    for (int i = 0; i <= cointsvalue[pos] && (i * coins[pos]) + sum <= k; ++i) {
        cnt += call(pos + 1, sum + i * coins[pos]);
        cnt = cnt % modd;
    }

    return dp[pos][sum] = cnt;
}

int main() {

    int m, num, tc, t = 1;

    scanf("%d", &tc);
    while (tc--) {
        scanf("%d %d", &n, &k);

        for (int i = 0; i < n; ++i) {
            scanf("%d", &coins[i]);
        }
        for (int i = 0; i < n; ++i) {
            scanf("%d", &cointsvalue[i]);
        }

        memset(dp, -1, sizeof(dp));
        printf("Case %d: %lld\n", t++, call(0, 0));

    }

}
