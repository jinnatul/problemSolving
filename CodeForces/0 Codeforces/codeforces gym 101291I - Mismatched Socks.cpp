#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long g,t,x,r,re=0,wq[1003];
    scanf("%lld",&t);
    for(g=0;g<t;g++)
        scanf("%lld",&wq[g]);
    sort(wq,wq+t);
    for(g=0;g<t;g++)
        re+=wq[g];
    if(wq[t-1]*2>re)
        r=re-wq[t-1];
    else r=re/2;
    printf("%lld\n",r);
    return 0;
}
