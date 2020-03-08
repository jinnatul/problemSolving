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
   int a,i,n,j,ln,ck=0;
   string arr;
   cin>>arr;
   ln = arr.size();

   for(i=0; i<ln; i++){
     if(arr.compare(i,5,"Danil")==0) ck++;
     else if(arr.compare(i,4,"Olya")==0) ck++;
     else if(arr.compare(i,5,"Slava")==0) ck++;
       else if(arr.compare(i,3,"Ann")==0) ck++;
        else if(arr.compare(i,6,"Nikita")==0) ck++;

   }
   if(ck==1) cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

}
