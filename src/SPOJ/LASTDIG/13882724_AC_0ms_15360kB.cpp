#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)

long long check(long long a,long long b,long long n)
{
    long long i,j,ck=1;
    while(b)
    {
        if(b%2)
            ck=(ck*a)%n;
        b>>=1;
        a=(a*a)%n;
    }
    return ck;
}


int main()
{
    long long int n,i,j,a,b,t;
    scl1(t);

    while(t--)
    {
        scl2(a,b);
        printf("%lld\n",check(a,b,10));
    }

}
