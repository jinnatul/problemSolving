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
     cin>>s>>v1>>v2>>t1>>t2;

     a = s*v1 + 2 * t1;
     b = s*v2 + 2 * t2;

     if(a<b)
        cout<<"First"<<endl;
     else if(a>b)
        cout<<"Second"<<endl;
     else
        cout<<"Friendship"<<endl;

}
