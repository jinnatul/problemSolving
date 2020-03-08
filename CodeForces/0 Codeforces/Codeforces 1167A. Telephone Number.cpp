#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define size1 105


int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);

    sc1(tc);

    while (tc--){
        sc1(num);
        string arr;
        cin >> arr;

        ll pos = 0, cnt = 0;

        for(ll i = 0; i < num; i++){
            if(arr[i] == '8'){
                pos = i;
                break;
            }
        }

        if(arr[0] == '8' && num >= 11){
            cout << "YES" << endl;
            continue;
        }

        ll ext = num - pos;

       // cout << ext << endl;

        if(ext >= 11 && pos > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
