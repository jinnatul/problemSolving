#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
     int n,i,ck,j;
     cin>>n;
     char arr[n];
     scanf("%s",arr);
     ck=0,j=0;
     for(i=0;i<n;i++){
          if(arr[i]=='A'){
               ck++;
          }
          else if(arr[i]=='D'){
               j++;
          }
     }
     if(ck==j){
          cout<<"Friendship"<<endl;
     }
     else if(ck>j){
          cout<<"Anton"<<endl;
     }
     else {
          cout<<"Danik"<<endl;
     }

}
