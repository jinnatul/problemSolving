#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105

char arr[5] = {'a', 'e', 'i', 'o', 'u'};

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);


    sc1(num);

    for(ll i = 5; i <= num; i++){
        if(num % i) continue;

        ll row = i;
        ll col = num / i;

        if(col < 5) continue;

        for(ll j = 0; j < row; j++){
            for(ll k = 0; k < col; k++){
                cout << arr[(j + k) % 5];
            }
        }
        cout << endl;
        return 0;
    }

    cout << "-1" << endl;

    return 0;
}
