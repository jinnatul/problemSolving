#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int i, n,t,ck,b=0;

    while(cin>>n,n){
        b++;
        ck=0;
        for(i=0; i<n; i++){
            cin>>t;
            if(t>0){
                ck++;
            }
            else{
                ck--;
            }

        }
        printf("Case %d: %d\n",b,ck);

    }
  
}
 

