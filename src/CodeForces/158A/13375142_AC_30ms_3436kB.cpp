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

     int a,b,c,n,ln,i,j,ck=0;

     cin>>n>>a;
     int arr[n];
     for(i=0; i<n; i++){
        cin>>arr[i];
     }

     for(i=0; i<n; i++){
        if(arr[i]>=arr[a-1] && arr[i]>0)
            ck++;
     }
     cout<<ck<<endl;

}
