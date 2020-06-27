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
/*

ll first, sec, num;
int used[5], check = 0;
ll position[15];
int arr[5];

void BT(int count, int ans) {

    if (ans == 23 && count == 5) {
        check = 1;
        return;
    }

    for (int i = 0; i < 5; i++) {
        if(!used[i]){
            used[i] = 1;
            BT(count+1, ans + arr[i]);
            BT(count+1, ans - arr[i]);
            BT(count+1, ans * arr[i]);
            used[i] = 0;
        }
    }

}

*/
vector<ll>vc;

ll check(ll n)
{
    ll size1 = vc.size();
    while (n!=0){
        vc.push_back(n % 10);
        n /= 10;
    }
    ll size2 = vc.size();
    reverse(vc.begin()+size1, vc.begin()+size2);
}

int main()
{
    ll row, col, tc, t = 1;

    sc1(tc);

    for(ll i = 1; i <= tc; i++){
        check(i);
    }

   cout << vc[tc - 1] << endl;

}