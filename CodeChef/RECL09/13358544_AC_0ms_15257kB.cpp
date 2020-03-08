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

   int a,c,ck=0,n,i,cc,dd,rem=0,rev=0,j=1;
   cin>>n;
   if(n==0 || n==1){
    cout<<"No"<<endl;
   }
   else{
   for(i=2; i<n; i++){
      if(n%i==0){
        ck=1;
        break;
      }
   }
   if(ck==0){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }
   }
}
