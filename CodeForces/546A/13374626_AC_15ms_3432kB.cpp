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
     cin>>a>>b>>c;
     for(i=1; i<=c; i++){
        ck+=(i*a);
     }
     if(ck<=b)
        cout<<"0"<<endl;
     else
        cout<<ck-b<<endl;
}
