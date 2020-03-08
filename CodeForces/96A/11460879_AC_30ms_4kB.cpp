/**
 *    author:  Jinnat Morol
 *           
**/

#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n;

    char arr[100],a[100];
    cin>>arr;
    int ln,ln2,i,j,ck;
    ln=strlen(arr);
    ck=0,j=0;
    for(i=0;i<ln;i++){
     if(arr[i]=='1' && arr[i+1]=='1' && arr[i+2]=='1' && arr[i+3]=='1' && arr[i+4]=='1' && arr[i+5]=='1' && arr[i+6]=='1'){
          i+=6;
          ck=1;
          break;

     }
     else if(arr[i]=='0' && arr[i+1]=='0' && arr[i+2]=='0' && arr[i+3]=='0' && arr[i+4]=='0' && arr[i+5]=='0' && arr[i+6]=='0'){
               i+=6;
          j=1;
          break;
     }

    }
    if(ck==1 || j==1){
     cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
}