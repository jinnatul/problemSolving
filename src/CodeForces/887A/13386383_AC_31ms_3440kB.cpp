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

     int a=0,b=0,c=0,n,ln,i,j,ck=0;
     string arr;
     cin>>arr;
     ln = arr.size();

     for(i=0; i<ln; i++){
        if(arr[i]=='1'){
            ck=0;
            for(j=i+1; j<ln; j++){
                if(arr[j]=='0')
                    ck++;
            }
         if(ck>=6){
        cout<<"yes"<<endl;
        return 0;
         }
        }
     }
    cout<<"no"<<endl;
}
