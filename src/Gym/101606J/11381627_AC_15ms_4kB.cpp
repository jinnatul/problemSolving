#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,j;
    double a=0,b=0,c=0,d=0,e=0,f=0,sum=0;

    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    
    a=0,b=0,c=0,d=0,e=0,f=0,sum=0;

    for(i=0; i<n; i++){

    if(arr[i]== 0 ){
        a+=2;
    }
    else if(arr[i]==1){
        b+=1;
    }
    else  if(arr[i]==2){
        c+=0.5;
    }
    else  if(arr[i]==4){
        d+=0.25;
    }
    else if(arr[i]==8){
        e+=0.125;
    }
   else  if(arr[i]==16){
        f+=0.0625;
    }
 
}
   sum+=(a+b+c+d+e+f);

   printf("%.6lf\n",sum );

}