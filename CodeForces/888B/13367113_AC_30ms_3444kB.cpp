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
     char arr[n];
     cin>>arr;

     for(i=0; i<n; i++){
        if(arr[i]=='L') l++;
        else if(arr[i]=='R') r++;
        else if(arr[i]=='U') u++;
        else if(arr[i]=='D') d++;
     }
     ck = n-(abs(l-r)+ abs(u-d));
     cout<<ck<<endl;
}
