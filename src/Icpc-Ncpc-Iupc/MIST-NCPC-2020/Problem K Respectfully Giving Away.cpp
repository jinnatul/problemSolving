#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)


/*** Loops ***/
#define foR0(num) for(ll i = 0; i < num; i++)


int main() {

    ll n, m, num, tc, t = 1;

    sc1(tc);
    while (tc--) {
        sc1(num);
        ll arr[num];
        foR0(num) sc1(arr[i]);

        sort(arr, arr + num);
        if(arr[num - 1] == arr[num - 2])
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

}
