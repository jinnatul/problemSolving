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

#define size1 32


int main()
{
    ll num, m, tc, t = 1;

    ll total_num, length;

    sc2(total_num, length);

    double radious = length / (2 * sin(PI / total_num));
    
    double area = PI * radious * radious;

    printf("%.9lf\n", area);

}