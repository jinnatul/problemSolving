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
     ll i,j=0,k,n=0,m=0,ln,t=0,a=0,b=0,c=0,d,ck=0,dk=0;
     string arr;
     cin>>arr;

     for(i=1; i<arr.size(); i++){
        if(arr[i]=='+')
            ck++;
        if(arr[i]=='-')
            ck++;
        if(arr[i]=='*')
            ck++;
     }

     cout<<ck<<endl;

}
