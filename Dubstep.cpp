#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
     char arr[200];
     int ln,i,n=1;
     gets(arr);
     ln=strlen(arr);

     for(i=0;i<ln;i++){
          arr[i]=toupper(arr[i]);
          if(arr[i]=='W' && arr[i+1]=='U' && arr[i+2]=='B'){
               i+=2;
     if(!n){
          cout<<" ";
     }

               continue;
     }
     else {
               n=0;
          cout<<arr[i];
     }

     }
     cout<<endl;

    return 0;
}