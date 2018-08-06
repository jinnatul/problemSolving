#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
     int n,i,ln,ck;
     char arr[100];
     cin>>arr;
     ln=strlen(arr);
     ck=0;
     for(i=0;i<ln;i++){

        //  arr[i]=toupper(arr[i]);

          if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9'){
               ck=1;
               break;

          }
     }

          if(ck==1)
               cout<<"YES"<<endl;

          else
               cout<<"NO"<<endl;



}