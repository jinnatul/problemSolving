#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,t,i,a,b,sum,max,j;

       cin>>t;

       for(i=1; i<=t; i++){
        
        max=0;

        cin>>n;
       
        for(j=0; j<n; j++){
           
            cin>>a;         
            if(a > max)
                max = a;
        }

        printf("Case %d: %d\n",i,max);
       }  

}