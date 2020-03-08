#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;
typedef int in;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define pfi1(a) printf("%d\n",a)

#define mx 1000010
#define mod 10000007
#define PI acos(-1.0)

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

int main() {

    ll  tc, num, t;

    //freopen("C:\\Users\\morol\\Desktop\\Clion\\input.txt", "r", stdin);

    ll arr[23];
    arr[0] = 1;

    for(ll i = 1; i <=22; i++){
        arr[i] = arr[i-1] * 2;
    }

    sc1(num);

    for(ll i = 1; i <= num; i++)
        cout << arr[i] << " ";

    return 0;
}