/***
  * Jinnat Morol
***/

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

int i,m,n,s,k;
    int arr[3];
    for(i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
  //  for(i=0;i<3;i++){
    //    cout<<arr[i]<<endl;

    if(arr[0]<arr[1] && arr[1]<arr[2]){
        m=arr[1]-arr[0];
        n=arr[2]-arr[1];
        s=m+n;
    }
    cout<<s<<endl;
}
