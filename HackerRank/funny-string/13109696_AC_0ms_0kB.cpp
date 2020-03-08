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


using namespace std;

int main()
{
     int n,t,i,j,k,a,ck=0,sum=0,ln,sum1=0,sum2=0;

     cin>>t;
     while(t--){
       string arr,brr;
       cin>>arr;

       ln = arr.size();
       j = ln-1;

       bool check = true;
       for(i=1; i<ln; i++,j--){
          if(abs(arr[i]-arr[i-1]) != abs(arr[j]-arr[j-1])){
            check = false;
            break;
          }
        }

        if(check){
        cout<<"Funny"<<endl;
       }
       else{
        cout<<"Not Funny"<<endl;
       }

   }

}
