/***
  * Jinnat Morol
***/

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
#include<set>
#include<sstream>
#include<stack>

using namespace std;

int main(){

     int a,b,c,i,exc,maka,ck=0,checkbig;
     cin>>a>>b>>c;
     exc = c-b;
     maka = (a/2);
     if(a==0 && b<=c){
        cout<<b<<endl;
     }
     else if(b==0 && maka<=c){
        cout<<maka<<endl;
     }
     else if(exc>=maka){
        cout<<b+maka<<endl;
     }
     else if(exc<maka){
        checkbig = maka-exc;
        maka = maka - checkbig;
        cout<<b+maka<<endl;
     }


}
