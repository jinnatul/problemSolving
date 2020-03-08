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


int main(){

     int a,b,n,i,ck=0,l=0,r=0,u=0,d=0;
     cin>>n>>a;
     int arr[n];

     for(i=0; i<n; i++){
        cin>>arr[i];
     }
     ck=0;
     for(i=0; i<n; i++){
         ck+=(86400-arr[i]);

         if(ck<a){
            r++;
          //  cout<<r<<endl;
         }
         else if(ck>=a){
            r++;
          //  cout<<r<<endl;
            break;
         }
     }
     cout<<r<<endl;
}