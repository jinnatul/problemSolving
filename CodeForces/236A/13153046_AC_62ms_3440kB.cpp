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

int main()
{
     int n,t,i,j,k,ck=0,a,b,c;
     char arr[101];
     cin>>arr;
     a = strlen(arr);
     sort(arr, arr+a);
     for(i=0; i<a; i++){
        if(arr[i]!=arr[i+1]){
            ck++;
        }
     }
     if(ck%2==0){
        cout<<"CHAT WITH HER!"<<endl;
     }
     else{
        cout<<"IGNORE HIM!"<<endl;
     }
}
