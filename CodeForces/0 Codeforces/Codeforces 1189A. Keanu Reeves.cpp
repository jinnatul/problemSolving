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

    string arr;
    cin >> arr;

    ll one = 0, ext = 0;
    for(ll i = 0; i < arr.size(); i++){
        if(arr[i] == '1') one++;
    }

    ext = arr.size() - one;

    if(ext != one){
        cout << 1 << endl;
        cout << arr << endl;
    }
    else{
        cout << 2 << endl;
        cout << arr[0] << " " << arr.substr(1, arr.size()) << endl;
    }
}
