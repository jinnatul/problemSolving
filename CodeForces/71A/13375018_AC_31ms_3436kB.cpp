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
     char arr[101];
     cin>>n;
     for(i=0; i<n; i++){
        cin>>arr;
        ln = strlen(arr);
        if(ln<=10){
            cout<<arr<<endl;
        }
        else{
            cout<<arr[0]<<ln-2<<arr[ln-1]<<endl;
        }
     }

}
