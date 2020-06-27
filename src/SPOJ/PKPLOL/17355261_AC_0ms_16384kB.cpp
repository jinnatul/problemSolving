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

int main() {

    ll tc, k, t = 1;

    //freopen("C:\\Users\\morol\\Desktop\\Clion\\input.txt", "r", stdin);

    sc1(tc);

    for(ll i = 1; i <= tc; i++){
        ll num;
        sc1(num);
        cout << "Case " << i << ": ";
        if(num == 0) cout << "abcdef" << endl;
        else if(num == 1) cout << "bc" << endl;
        else if(num == 2) cout << "abdeg" << endl;
        else if(num == 3) cout << "abcdg" << endl;
        else if(num == 4) cout << "bcfg" << endl;
        else if(num == 5) cout << "acdfg" << endl;
        else if(num == 6) cout << "acdefg" << endl;
        else if(num == 7) cout << "abc" << endl;
        else if(num == 8) cout << "abcdefg" << endl;
        else if(num == 9) cout << "abcdfg" << endl;
    }

    return 0;
}