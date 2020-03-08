#include<iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)

#define foR0(num) for(ll i = 0; i < num; i++)

int main() {

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
#endif

    ll n, m, num, tc, t = 1;

    sc1(tc);
    while (tc--) {
        sc1(num);

        ll arr[1005];
        for (ll i = 1; i <= num; ++i) {
            sc1(arr[i]);
        }

        if(num & 1){
            num++;
            arr[num] = 0;
        }

        sort(arr + 1, arr + num + 1);

        ll ans = 0;
        for (ll i = 2; i <= num; i += 2) {
            ans ^= (arr[i] - arr[i - 1] - 1);
        }

        if(ans) cout << "Georgia will win" << endl;
        else cout << "Bob will win" << endl;
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif

}