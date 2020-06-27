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


int main(){

  int a,b,c,n,ck=0,j,max,dk=0,i;
  cin>>n;
  int arr[n],brr[n];
  for(i=0; i<n; i++)
    cin>>arr[i];

  sort(arr,arr+n);
  for(i=0; i<n; i++)
    brr[i]=arr[i];
  bool check[n];
  memset(check,1,sizeof(check));
  for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
        if(arr[i]<brr[j]){
           check[i]=0;
           brr[j]=arr[i];
            break;
        }
    }
  }
  for(i=0; i<n; i++){
  if(check[i]){
    ck++;
  }
  }
  cout<<ck<<endl;

}
