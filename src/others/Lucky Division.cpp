#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define pf printf

using namespace std;


int main()
{
     int  i,k,m,j,ln,ck,n;
     string arr;
     cin>>arr;
     //int num = atoi(arr);
     int a = atoi(arr.c_str());
     ln = arr.length();
      //cout<<a<<endl;
     ck=0;
     for(i=0;i<ln;i++){
          if(arr[i]=='4' || arr[i]=='7'){
               ck++;
          }
          //else if()
     }
     if(ck==ln){
          cout<<"YES"<<endl;
     }
     else if(a % 4 == 0 || a % 7 == 0){
          cout<<"YES"<<endl;
     }
     else if(a % 47 == 0){
          cout<<"YES"<<endl;
     }
     else {
          cout<<"NO"<<endl;
     }


}