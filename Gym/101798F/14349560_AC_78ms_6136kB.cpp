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

ll ck;
void checkme(ll arr[], ll n);

int main()
{
    ll i,j=0,k,l,a=0,b,m,n,dk=0;

    scl1(n);
    ll arr[n];

    for(i=0; i<n; i++){
        scl1(arr[i]);
    }

    checkme(arr, n);

    cout<<ck<<endl;
}

void checkme(ll arr[], ll n)
{
    ll brr[n],j=0,i;

    if(n==1) return;

    for(i=0; i<n; i+=2){
        brr[j++] = max(arr[i], arr[i+1]);
        ck+=abs(arr[i] - arr[i+1]);
    }
    checkme(brr, j);
}
