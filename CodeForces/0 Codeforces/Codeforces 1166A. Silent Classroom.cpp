#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define size1 1001

int main() {

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("D:\\Coding\\clion\\output.txt", "w", stdout);

    sc1(tc);

    int save[30];

    memset(save, 0, sizeof(save));

    while (tc--){
        string arr;
        cin >> arr;
        save[arr[0] - 'a']++;
    }

    ll ans = 0;
    for(ll i = 0; i < 30; i++){
        ll a = (save[i] + 1) / 2;
        ll b = save[i] - a;
        ans += (a * (a - 1))/2;
        ans += (b * (b - 1))/2;
    }

    pf1(ans);

    return 0;
}
