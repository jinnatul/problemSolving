#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1
#define pb push_back

int main()
{

    ll k, num, m, tc, t = 1;

    sc1(num);

    ll arr[num];

    for(ll i = 0; i < num; i++){
        sc1(arr[i]);
    }

    sort(arr, arr + num);

    if(arr[num - 1] >= arr[num - 2] + arr[num - 3]){
        cout << "NO" << endl;
    } else{
        cout << "YES" << endl;
        cout << arr[num - 3] << " " << arr[num - 1] << " " << arr[num - 2] << " ";
        for(ll i = 0; i < num - 3; i++){
            cout << arr[i] << " ";
        }

    }

}
