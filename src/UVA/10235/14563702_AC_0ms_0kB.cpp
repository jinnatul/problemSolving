#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long int ll;


//Int data type
#define sc1(a)              scanf("%d", &a)
#define sc2(a, b)           scanf("%d %d", &a, &b)
#define sc3(a, b, c)        scanf("%d %d %d", &a, &b, &c)
#define sc4(a, b, c, d)     scanf("%d %d %d %d", &a, &b, &c, &d)

//Long Data type
#define scl1(a)             scanf("%lld", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)
#define scl3(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define scl4(a, b, c, d)    scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define mx 1000005
#define pf(a) cout<<a<<endl

/************ Star Library ************/
// Square number count in 2 number range (3 - 10)--> 2

#define Square_number_count_in_2_rang(n) for(ll i=0; i<n; i++){ scl2(a,b); ck = sqrt(a-1); dk = sqrt(b); cout<<dk-ck<<endl; }



// *********  Start in main method code  ************//

ll max(ll a, ll b){  return (a>b) ? a : b; }
/*
ll knapsack(ll cap,ll wt[],ll val[],ll item)
{
    if(cap==0 || item == 0)
        return 0;

    if(wt[item-1]>cap)
        return knapsack(cap, wt, val, item-1);

    else
        return max(val[item-1]+ knapsack(cap-wt[item-1], wt, val, item-1),

                   knapsack(cap, wt, val, item-1)
                   );

}
//ll arr[mx],brr[mx],crr[mx];

*/

bool prime(ll n)
{
    if(n<2)
        return false;
    for(ll i=2; i*i<=n; i++)
            if(n%i==0)
               return false;
            return true;

}

ll rev(ll n)
{
    ll b=0;
    while(n!=0){
            b = b*10 + n%10;
            n/=10;
        }
        return b;
}


int main()
{
    ll aa,bb,a,n,m,b=0,i=0,j,dk,ck=0;

    while(scl1(n)==1){

        if(prime(n)==false)
            printf("%lld is not prime.\n", n);
        else{
            if(prime(rev(n))==true && rev(n)!=n)
                printf("%lld is emirp.\n", n);
            else
                printf("%lld is prime.\n", n);
        }

    }
}
