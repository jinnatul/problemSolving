#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define size1 10001

bool check[size1], fact[size1];
vector <ll> prime, total;

void seive()
{
    memset(check, true, sizeof(check));

    for(ll i = 4; i < size1; i += 2) check[i] = false;

    check[0] = check[1] = false;

    for(ll i = 3; i * i < size1; i+=2){
        if(check[i]){
            for(ll j = i * i; j < size1; j += (2 * i)) check[j] = false;
        }
    }
}

void preCal()
{
    memset(fact, false, sizeof(fact));

    fact[0] = fact[1] = false;

    for(ll i = 2; i <= size1; i++) {
       int cnt = 0;
       for(ll j = 1; j * j <= i; j++){
           if(i % j == 0){
               cnt += 2;
               if(i / j == j) cnt--;
           }
       }

       if(check[cnt]) fact[i] = true;
       else fact[i] = false;
    }

}

int main() {

    seive();
    preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("D:\\Coding\\clion\\output.txt", "w", stdout);

    sc1(tc);

    while (tc--){
        ll left, right;

        sc2(left, right);

        bool ck = true;
        for(ll i = left; i <= right; i++){
            if(fact[i]){
                if(ck) ck = false;
                else cout << " ";
                cout << i;
            }
        }

        if(ck) cout << "-1";

        cout << endl;
    }

    return 0;
}
