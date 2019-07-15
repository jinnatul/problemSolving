#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1
#define pb push_back

int main()
{

    ll k, num, m, tc, t = 1;

    sc1(tc);

    while (tc--){
        sc2(num, k);

        if(k % 3){
            if(num % 3) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
        else{
            ll ext = num % (k + 1);
            if(ext % 3 || ext == k) cout << "Alice" << endl;
            else cout << "Bob" << endl;
        }
    }
}
