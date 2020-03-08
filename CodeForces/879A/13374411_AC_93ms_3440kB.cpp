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

     int a,b,c,n,i,j,k,ck=0;
       cin>>n;
       for(i=0; i<n; i++){
        cin>>a>>b;
        while(a<=ck){
            a+=b;
        }
        ck=a;
     }
     cout<<a<<endl;

}
