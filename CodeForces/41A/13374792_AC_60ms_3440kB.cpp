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

     int a,b,c,n,i,j,k,s,v1,v2,t2,t1,ck=0;
     char arr[101],brr[101];
     cin>>arr;
     cin>>brr;
     a = strlen(arr);
     b = strlen(brr);

     for(i=0, j=b-1; i<a && j>=0; i++,j--){
        if(arr[i]!=brr[j]){
            ck=1;
            break;
        }
     }
     if(ck==0)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
}
