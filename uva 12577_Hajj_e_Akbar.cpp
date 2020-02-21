#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,i,j,ck=0;
    char arr[100],a[100];

    while(cin>>arr){
          ck++;
         if(strcmp(arr,"*")==0)
          break;

      if(strcmp(arr,"Hajj")==0){

          printf("Case %d: Hajj-e-Akbar\n", ck);

      }
      else if(strcmp(arr,"Umrah")==0){

          printf("Case %d: Hajj-e-Asghar\n", ck);
      }
   }
}
