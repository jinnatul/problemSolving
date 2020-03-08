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
   int arr[3];

   for(i=0; i<n; i++){
    for(j=0; j<3; j++){
        cin>>arr[j];
    }
    sort(arr, arr+3);
    cout<<arr[1]<<endl;
   }
}
