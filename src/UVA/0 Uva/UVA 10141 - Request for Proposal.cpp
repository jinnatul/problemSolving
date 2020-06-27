#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main() {

    //seive();
    //preCal();

    ll tc, num, t = 1, choose;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("D:\\Coding\\clion\\output.txt", "w", stdout);

    while (cin >> num >> tc && num && tc){

        if(t > 1) cout << endl;

        string arr;

        while (num--) {
            cin.ignore();
            getline(cin, arr);
        }

        string now, ans;
        double pri, price = 2000000000;
        int rm, reqmarket = -1;

        while (tc--) {
            getline(cin, now);
            rm = 0;
            cin >> pri >> rm;

            if((rm > reqmarket) || (rm == reqmarket && pri < price)){
                reqmarket = rm;
                price = pri;
                ans = now;
            }

            cin.ignore();
            while (rm--)
                getline(cin, arr);
        }

        cout << "RFP #" << t++ << endl;
        cout << ans << endl;
    }

    return 0;
}
