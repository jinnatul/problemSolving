#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native"
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105

vector <ll> vc = {4, 8, 15, 16, 23, 42};
ll arr[10];

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    for(int i = 0; i < 4; i++)
    {
        cout << "? " << i + 1 << " " << i + 2 << endl;
        //cout.flush();
        cin >> arr[i];
    }

    do{
        bool ck = true;

        for(ll i = 0; i < 4; i++){
            ck &= (vc[i] * vc[i + 1] == arr[i]);
        }

        if(ck) break;

    }while (next_permutation(vc.begin(), vc.end()));

    cout << "!";
    for(int i = 0; i < 6; i++)
        cout << " " << vc[i];
    cout << endl;
    //cout.flush();

    return 0;
}
