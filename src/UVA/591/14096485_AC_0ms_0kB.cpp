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


/// Constants
#define Max                 10000007
#define MOD                 1000000009
#define base                1000000007
#define PI                  acos(-1.0)  // 3.1415926535897932


int main(){

    int n,m,i=0,j=0,t,ck=0,dk,a=0,b,ln;
    int arr[100];

    while(sc1(n)==1 && n!=0){

        j++;
        int sum=0, avg=0, ans =0;
        for(i=0; i<n; i++){
            sc1(arr[i]);
            sum+=arr[i];
        }
        avg = sum/n;

        for(i=0; i<n; i++){
          
            ans += abs(arr[i] - avg);
        }
        printf("Set #%d\n", j);
        printf("The minimum number of moves is %d.\n\n", ans/2);
    }

}
