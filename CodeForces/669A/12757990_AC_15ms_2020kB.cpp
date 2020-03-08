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

int main()
{
   long long int a,b,c,ck=0,i,j,n,t,k,dk=0;
   cin>>n;

   if(n%3==0){
    ck = ((n/3)*2);
    cout<<ck<<endl;
   }
   else{
        if(n<3)
        cout<<"1"<<endl;
       else{
         ck = (((n/3)*2)+1);
         cout<<ck<<endl;
       }

   }

}
