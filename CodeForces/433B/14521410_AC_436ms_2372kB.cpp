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

#define mx 100005
#define pf(a) cout<<a<<endl

/************ Star Library ************/
// Square number count in 2 number range (3 - 10)--> 2

#define Square_number_count_in_2_rang(n) for(ll i=0; i<n; i++){ scl2(a,b); ck = sqrt(a-1); dk = sqrt(b); cout<<dk-ck<<endl; }



// *********  Start in main method code  ************//

ll max(ll a, ll b){  return (a>b) ? a : b; }

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
ll arr[mx],brr[mx],crr[mx];

int main()
{
    ll n,m,i,j,k=0,ck=0,dk=0,a,b,c,t;

    scl1(n);

    for(i=1; i<=n; i++){
        scl1(arr[i]);
        brr[i] = brr[i-1]+arr[i];
    }

    sort(arr+1, arr+n+1);

    for(i=1; i<=n; i++){
        crr[i] = crr[i-1]+arr[i];
    }

    scl1(t);
    while(t--){
        scl3(a,b,c);
        if(a==1)
           cout<<brr[c] - brr[b-1]<<endl;
        else
           cout<<crr[c] - crr[b-1]<<endl;
    }
}
