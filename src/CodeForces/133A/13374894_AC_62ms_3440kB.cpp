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

     for(i=0; i<ln; i++){
        if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9'){
            ck=1;
            break;
        }
     }
     if(ck==1)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
}
