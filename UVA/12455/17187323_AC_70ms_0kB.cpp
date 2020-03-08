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

ll binaryarray[100], arr[100], first;

vector <ll> vc;

void DecToBinary(ll DecNum, ll size) {

    binaryarray[size];
    memset(binaryarray, 0, sizeof(binaryarray));
    ll j = 0;
    while (DecNum > 0) {
        binaryarray[j++] = DecNum % 2;
        DecNum /= 2;
    }

    ll sum = 0;
    for (ll i = size - 1; i >= 0; i--) {
        if (binaryarray[i] == 1) {
            sum += arr[i];
        }
    }
    vc.push_back(sum);
}

int main()
{
    ll num, tc, t = 0;

    sc1(tc);

    while (tc--) {

        sc2(first, num);
        vc.clear();
        memset(arr, 0, sizeof(arr));

        for (ll i = 0; i < num; i++) {
            sc1(arr[i]);
        }

        ll subset = pow(2, num) - 1;
        bool oh = false;

        for (ll i = 0; i <= subset; i++) {
            DecToBinary(i, num);
        }

        for(ll i = 0; i < vc.size(); i++){
            if(vc[i] == first){
                cout << "YES" << endl;
                oh = true;
                break;
            }
        }
        if(!oh)
            cout << "NO" << endl;

    }

    return 0;
}