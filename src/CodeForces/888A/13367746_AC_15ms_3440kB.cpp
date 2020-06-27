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
     cin>>n;
     int arr[n];

     for(i=0; i<n; i++){
        cin>>arr[i];
     }

     for(i=1; i<n-1; i++){
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            ck++;
        }
        else if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            ck++;
        }
     }
     cout<<ck<<endl;
}
