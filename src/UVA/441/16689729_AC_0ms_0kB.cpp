#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000010
#define mod 10000007
#define PI acos(-1.0)


ll first, sec, num;
ll used[25], check;
ll position[15];
ll arr[15];

void BT(ll pos, ll m) {

    if (pos == 6) {

            cout << position[0];
            for (ll i = 1; i < 6; i++) {
                cout << " " << position[i];
            }
            cout << endl;
            return;
        }

    for ( ; m < num; m++) {
            position[pos] = arr[m];
            BT(pos+1, m+1);
        }

}



int main()
{
    ll tc, t = 1;

    //freopen ("input.txt", "r", stdin);

    while (sc1(num)) {
        if(num == 0) break;
        if(t > 1) cout << endl;
        t++;

        memset(position, 0, sizeof(position));
        memset(arr, 0, sizeof(arr));

        arr[num];
        for (ll i = 0; i < num; i++) sc1(arr[i]);

        BT(0, 0);
    }

    return 0;
}