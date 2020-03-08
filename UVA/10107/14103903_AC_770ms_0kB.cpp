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



int main(){

    ll i=0,j=0,n,m,t,a=0,b,ck=0,ln;
    ll arr[100000];
    while(scl1(t)==1){
        arr[i] = t;
        sort(arr, arr+i+1);
        if(i%2==0){
            cout<<arr[i/2]<<endl;
        }
        else{
            ln = arr[i/2] + arr[i/2+1];
            cout<<ln/2<<endl;
        }
        i++;
    }
}
