#include<iostream>

using namespace std;

typedef long long ll;


#define mod 1000000000
#define size1 1000005

ll dp[size1];
ll call(ll num) {
    if(num < 2) return 1;
    dp[1] = 1;
    for (ll i = 2; i <= num; ++i) {
        if(i & 1) dp[i] = dp[i - 1] % mod;
        else dp[i] = (dp[i - 1] + dp[i/2])%mod;
    }
    return dp[num];
}

int main() {

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif

    ll n, m, num, tc, t = 1;

    cin >> num;

    cout << call(num) << endl;

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

}