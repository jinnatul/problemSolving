#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>

using namespace std;

int main()
{


   int n;
   cin>>n;
   while(n--){
   long a,t,b,c,d,i,m,ck=0,arr[700][700],sum=0,morol=0,mmax=9999999999;


   cin>>t;

   for(m=0; m<t; m++){
   for(i=0; i<t; i++){

          cin>>arr[m][i];
      }
    }
  //  for(m=0; m<t; m++){
  //      sort(arr[m],arr[m]+t);

  // }

   for(m=t-1; m>=0; m--){
        morol=0;
        for(i=0;i<t; i++){
            if(arr[m][i]>morol && arr[m][i]<mmax){
                morol=arr[m][i];
            }
        }
        if(morol==0){
            cout<<"-1"<<endl;
            ck=1;
            break;

        }
        else{
            sum+=morol;
            mmax = morol;
        }

   }
   if(ck!=1){
    cout<<sum<<endl;
   }

}

}
