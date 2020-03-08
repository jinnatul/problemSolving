#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105


vector <ll> vc;

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(num);

    ll arr[num];

    for(ll i = 0; i < num; i++)
        sc1(arr[i]);

    if(num < 5) return cout << "-1" << endl,0;
    
    for(ll i = 0; i < num; i+=2){
        vc.push_back(arr[i]);
    }

    for(ll i = 1; i < num; i+=2){
        vc.push_back(arr[i]);
    }

    if(num & 1){

        for(ll i = 0; i < vc.size(); i++){
            cout << vc[i] << ((i < vc.size() - 1) ? ' ' : '\n');
        }
    }
    else{

        ll siz = vc.size();
        swap(vc[siz - 1], vc[siz - 2]);

        for(ll i = 0; i < vc.size(); i++){
            cout << vc[i] << ((i < vc.size() - 1) ? ' ' : '\n');
        }
    }


    return 0;
}