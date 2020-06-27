#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 1000000007
#define PI acos(-1.0)

#define size1 10010

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };


int main()
{
    unsigned long tc, num, t = 1, i, j, cnt = 0;

    // freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    cin >> tc;

    while (tc--){

        cin >> num;

        ll arr[num];

        if(num == 0){
            cout << "0" << endl;
            continue;
        }
        
        for(ll i = 0; i < num; i++) {
            ll x;
            sc1(arr[i]);
        }

        sort(arr, arr + num);

        ll cnt = 1, now = arr[0] + 10, ans = 0;

        for(ll i = 0; i < num; i++){
            if(arr[i] <= now) continue;
            else if(arr[i] <= now + 10) continue;
            else {
                now = arr[i] + 10;
                cnt++;
            }
        }

        pf1(cnt);

    }

    return 0;
}