#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx INT_MAX
#define mod 10000007
#define PI acos(-1.0)


ll first, sec;
ll used[30], check;
char position[30];

void BT(ll pos)
{
    if(pos == first){

        for (ll i = 0; i < first; i++) {
              cout << position[i];
         }

         cout << endl;
         //cout<<check<<endl;
         check ++;
         return;
        }

    if(check >= sec) return;   // check sec num greater or equal in our using check variable value

    for(ll i = 0; i < first; i++){
        if(used[i] == 0){            // first check our user array value yes (1) / no (0)
            used[i] = 1;             // if we see our user array value is 0 then we update this value using 1
            position[pos] = i + 'A';  // then we push char in this position
            BT(pos + 1);             // then we again call our function
            used[i] = 0;
        }
    }
}



int main()
{
    ll num,tc, t = 1;

    sc1(tc);

    for(ll i = 1; i <= tc; i++){
        check = 0;
        sc2(first, sec);
        memset(used, 0, sizeof(used));
        memset(position, 0, sizeof(position));
        cout << "Case "<< i << ":" << endl;
        BT(0);
    }


    return 0;
}