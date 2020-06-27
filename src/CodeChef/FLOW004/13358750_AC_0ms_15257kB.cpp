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

     int a,b,n,i,ck=0,fa=0,la=0;
     cin>>n;

     while(n--){
        cin>>a;
         if(a<10){
        cout<<a<<endl;
     }
     else{
        la = a%10;

        while(a>=10){
            a/=10;
        }
        fa = a;
        cout<<la+fa<<endl;
     }
     }
}
