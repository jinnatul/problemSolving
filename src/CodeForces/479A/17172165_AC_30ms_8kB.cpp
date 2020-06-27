#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)


int main()
{
    ll tc, t = 0, n, a, b, c;

    sc2(a, b);
    sc1(c);

    ll arr[6];

    arr[0] = a+b+c;
    arr[1] = a*b*c;
    arr[2] = a+(b*c);
    arr[3] = a*(b+c);
    arr[4] = (a*b)+c;
    arr[5] = (a+b)*c;

    sort(arr, arr+6);

    cout << arr[5] << endl;

    return 0;
}