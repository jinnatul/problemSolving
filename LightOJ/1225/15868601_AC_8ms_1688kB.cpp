#include<bits/stdc++.h>

using namespace std;

#define ll long long
int main()
{
    ll n,m,a,b=0,i=1,j,ck=0;

    scanf("%lld", &n);

    while(n--){
         scanf("%lld", &a);
         ck =0,b=0;
         b = a;

         while(a!=0){
            ck = a%10 + ck*10;
            a/=10;
         }
         if(b==ck) printf("Case %lld: Yes\n", i++);
         else printf("Case %lld: No\n", i++);
    }
}
