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

ll arr[1000];

int main()
{
    ll tc, num, t = 1, a, b;

    while (sc1(tc)) {
        if(tc == 0) break;

        cout << "Case " << t++ << ":" << endl;

        arr[tc];
        for(ll i = 0; i < tc; i++)
            sc1(arr[i]);

        ll testcase;
        sc1(testcase);
        while (testcase--){
            ll givenum;
            sc1(givenum);

            ll ck = arr[0] + arr[1];

            for(ll i = 0; i < tc; i++){
                for(ll j = i+1; j < tc; j++){
                    ll yes = arr[i]+arr[j];
                    if(abs(ck - givenum) > abs(yes - givenum)) ck = yes;
                }
            }

            printf("Closest sum to %lld is %lld.\n", givenum, ck);
        }
    }

    return 0;
}