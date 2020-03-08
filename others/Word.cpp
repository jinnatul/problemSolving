#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
     char arr[200];
     int ln,i,n,m;
     gets(arr);
     ln=strlen(arr);
     m=0,n=0;

     for(i=0;i<ln;i++){
          if(arr[i]>=65 && arr[i]<=90){
               m++;
          }
          else{
               n++;
          }
     }

          if(n<m){
                for(i=0;i<ln;i++)
                    arr[i]=toupper(arr[i]);
                }
                else{
                for(i=0;i<ln;i++)
                    arr[i]=tolower(arr[i]);
                }
     cout<<arr<<endl;


    return 0;
}