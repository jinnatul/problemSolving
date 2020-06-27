#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 10000007
#define mod 100000007
#define PI acos(-1.0)

int dr[] = {-2,-2,-1,-1,1,1,2,2};
int dc[] = {-1,1,-2,2,-2,2,-1,1};


int main()
{
    ll num, m, tc = 1;
    ll small, big, sum;

    cin >> num >> small >> big >> sum;

    if(((num - 1)*small + big) > sum || ((num - 1)*big + small) < sum)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;

}