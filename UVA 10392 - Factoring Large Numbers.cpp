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
vector <ll> prime;

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

    for(ll i = 1; i < size1; i++){
        if(check[i]) prime.push_back(i);
    }
}



int main() {

    seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    while (cin >> num && num != -1){

        int pos = 0;
        int siz = prime.size();

        while (pos < siz){
            if(num % prime[pos] == 0){
                while (num % prime[pos] == 0){
                    cout << "    " << prime[pos] << endl;
                    num /= prime[pos];
                }
            }
            pos++;
        }

        if(num != 1) cout << "    " << num << endl << endl;
        else cout << endl;
    }

    return 0;
}
