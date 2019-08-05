#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 100007
#define mod 100000007
#define PI acos(-1.0)

#define size1 998244353
#define pb push_back

int main()
{

    ll m, tc, num, t = 1;

    sc1(num);

    string aa="", bb="";
    while (num != 0){
        ll x = num - 1;
        ll y = num - 2;
        if(x % 2 == 0){
            aa += "A";
            num = (num / 2);
            //cout <<"x: " << aa << " "<< num<<  endl;
            continue;
        }
        if(y % 2 == 0){
            aa += "B";
            num = (num / 2) - 1;
            //cout <<"y: " << aa << " "<< num<< endl;
            continue;
        }
    }

    reverse(aa.begin(), aa.end());

    cout << aa << endl;

}
