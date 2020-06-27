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

   ll a,t,b,c,d=0,j=1,k,n,i=1,m=0,ck=0;
   char aa[47] = {'q','w','e','r','t','y','u','i','o','p',91,93,92,
                 'a','s','d','f','g','h','j','k','l',59,39,
                 'z','x','c','v','b','n','m',44,46,47,
                 '`','1','2','3','4','5','6','7','8','9','0',45,61
                 };
   string arr;
   while(getline(cin, arr)){
      int ln = arr.size();
      for(i=0; i<ln; i++){
        if(arr[i]>=65 && arr[i]<=90)
            arr[i] =  tolower(arr[i]);
      }
      for(i=0; i<ln; i++){
        if(arr[i]==' ' || arr[i]=='\n')
            cout<<arr[i];

      else{
        for(j=1; j<47; j++){
            if(arr[i]==aa[j]){
                cout<<aa[j-2];
                break;
            }
          }
        }
      }
   cout<<endl;
   }
}
