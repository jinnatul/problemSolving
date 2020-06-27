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

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};

/*
ll arr[10], newarray[10], tc;
bool used[10];

void BT(ll pos)
{
    if(pos == 2){
        for(ll i = 0; i < 2; i++){
            cout << newarray[i];
        }
        cout << endl;
        return;
    }

    for(ll i = 0; i < tc; i++){
        if(!used[i]){
            used[i] = true;
            newarray[i] = arr[i];
            BT(pos+1);
            used[i] = false;
        }
    }

}

*/

ll ans(ll num)
{
    if(num < 0) return -1*((- num * (-num +1))/2);
    else return (num * (num + 1)) / 2;
}

int main() {

    ll tc, k, t = 1;

    //freopen("C:\\Users\\morol\\Desktop\\Clion\\input.txt", "r", stdin);

    ll first, sec;
    while (cin >> first >> sec){
        if(first > sec) swap(first, sec);

        if(sec < 0)
            printf("%lld\n", ans(first) - ans(sec+1));
        else if(first <= 0)
            printf("%lld\n", ans(sec) + ans(first));
        else
            printf("%lld\n", ans(sec) - ans(first - 1));
    }
    return 0;
}