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
    int n,i,ln,ck1;
     char arr[100];
     cin>>arr;
     ln=strlen(arr);
     ck1=0;
     for(i=0;i<ln;i++){
          if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9'){
               ck1=1;
               break;
          }
     }
    if(ck1==1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;


}
