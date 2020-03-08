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

#define mx 100000000
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

int main()
{
    ll n,m,i,j,k=0,ck=0,dk=0,a,b;
    scl1(n);
    string arr;
    cin>>arr;

    for(i=0; i<n-1; i++){
        if(arr[i]=='R' && arr[i+1]=='R')
            ck++;
        if(arr[i]=='G' && arr[i+1]=='G')
            ck++;
        if(arr[i]=='B' && arr[i+1]=='B')
            ck++;
    }
    cout<<ck<<endl;
}
