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

/************ Start my personal Library ************/
// Square number count in 2 number range (3 - 10)--> 2

#define Square_number_count_in_2_rang(n) for(ll i=0; i<n; i++){ scl2(a,b); ck = sqrt(a-1); dk = sqrt(b); cout<<dk-ck<<endl; }


ll max(ll a, ll b){  return (a>b) ? a : b; }

ll knapsack(ll cap,ll wt[],ll val[],ll item){ if(cap==0 || item == 0) return 0; if(wt[item-1]>cap) return knapsack(cap, wt, val, item-1);
   else return max(val[item-1]+ knapsack(cap-wt[item-1], wt, val, item-1), knapsack(cap, wt, val, item-1) ); }

ll totalLearYearCount(ll year){ ll check4 = year/4; ll check100 = year/100; ll check400 = year/400; return (check4 + check400) - check100; }

ll checkTwoSquaresOrNotTwoSquares(ll n ){ ll a = sqrt(n),ck=0,i=0,j=0; while(a > 0){ if(i*i > n){ cout<<"No"<<endl; break; } else if(a*a + i*i == n){
   cout<<"Yes"<<endl; break; } else if(a*a + i*i < n){ i++; } else a--; } }




/************ Start my main method code ************/

ll arr[mx],brr[mx],crr[mx];

int main()
{
    ll a,n,m,t,b=0,c,i=1,j=0,aa,dk=0,ck=0;

    scl2(n, m);
    for(i=1; i*i<=n; i++){
        if(n%i==0){
            arr[j++] = i;
            if(i!=n/i)
                arr[j++] = n/i;
        }
    }
    sort(arr, arr+j);
    if(m>j)
        cout<<"-1"<<endl;
    else
         printf("%lld\n", arr[m-1]);

}
