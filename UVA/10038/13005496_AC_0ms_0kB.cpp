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

int arr[4000],brr[4000];

int main(){

  int a,b,c,n,ck,j,max,dk=0,i;

  while(scanf("%d",&n)!=EOF){


  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  ck=1;
   for(i=1; i<n; i++){

     brr[ck++] = abs(arr[i]-arr[i-1]);
   }

  sort(brr+1,brr+ck);

   bool check = true;

 for(j=1; j<ck; j++){
    if(brr[j]!=j){
    check = false;
    break;
   }
 }

if(check){
    cout<<"Jolly"<<endl;
   }
   else{
    cout<<"Not jolly"<<endl;
   }

}

}
