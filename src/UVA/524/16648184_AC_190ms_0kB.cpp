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


ll first, sec, num;
ll used[25], check;
ll position[25];

vector<ll> vc = {2,3,5,7,11,13,17,19,23,29,31};

bool checkPrime(ll a)
{
    for (ll  i = 0; i < vc.size(); i++){
        if(vc[i] == a) return  true;
    }
    return false;
}


void BT(ll pos) {

    if (pos == num-1 && checkPrime(position[num] + position[num -1])) {

          cout << "1";
          for (ll i = 1; i < num; i++) {
              cout << " " << position[i];
          }
          cout << endl;
          return;
       }

    for (ll i = 2; i <= num; i++) {
            if (!used[i] && checkPrime(position[pos] + i)) {
                    used[i] = 1;
                    position[pos + 1] = i;
                    BT(pos + 1);
                    used[i] = 0;
                }
            }

}


int main()
{
    ll tc, t = 1;

    while (cin >> num){
        if( t > 1) cout << endl;
        position[0] = position[num] = 1;

        cout << "Case " << t++ << ":" << endl;
        //memset(used, 0, sizeof(used+1));
        //memset(position, 1, sizeof(position));
        BT(0);
    }

    return 0;
}