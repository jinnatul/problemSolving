#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 1000001

bool check[size1];
//vector <ll> prime;
ll almostPrime[size1 + 5];

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

    /*
    for(ll i = 1; i < size1; i++){
        if(check[i]) prime.push_back(i);
    }
     */
}

vector <ll> vc;
void preCal()
{
    ll total = 0;
    for(ll i = 2; i < size1; i++){
        if(check[i]){
            for(ll j = i * i; j <= 1000000000000; j *= i){
                vc.push_back(j);
            }
        }
    }
    sort(vc.begin(), vc.end());
}

int main() {

    seive();
    preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){

        ll left, right;
        sc2(left, right);

        ll ans1 = lower_bound(vc.begin(), vc.end(), left) - vc.begin();
        ll ans2 = upper_bound(vc.begin(), vc.end(), right) - vc.begin();

        pf1(ans2 - ans1);
    }

    return 0;
}
