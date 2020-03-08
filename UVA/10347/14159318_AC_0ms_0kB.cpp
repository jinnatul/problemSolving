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


int main()
{
     ll i,j,n=0,t,k,ck=0,num=0,d;
     double a,b,c,aa,bb,cc;
     vector<double>arr(3);
     while(cin>>arr[0]>>arr[1]>>arr[2]){
        sort(arr.begin(), arr.end());
     if(arr[0]+arr[1]>arr[2]){
        aa = (arr[0]+arr[1]+arr[2])/2.00;
        bb = (aa*(aa-arr[0])*(aa-arr[1])*(aa-arr[2]));
        cc = (4.0/3.0)*sqrt(bb);
        printf("%.3lf\n", cc);
     }
     else
        cout<<"-1.000"<<endl;
     }
}
