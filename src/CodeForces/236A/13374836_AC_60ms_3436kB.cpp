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
     char arr[101],brr[101];
     cin>>arr;
     ln = strlen(arr);

     sort(arr, arr+ln);
     for(i=0; i<ln; i++){
        if(arr[i]!=arr[i+1]){
            ck++;
        }
     }
     if(ck%2==0)
        cout<<"CHAT WITH HER!"<<endl;
     else
        cout<<"IGNORE HIM!"<<endl;
}
