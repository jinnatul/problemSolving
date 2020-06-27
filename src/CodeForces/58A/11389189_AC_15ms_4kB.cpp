#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
     string word="hello";
     char arr[100];
     gets(arr);
     int ln,i,n,m,a,count;
     ln=strlen(arr);
     a=0,count=0;
     for(i=0; i<ln; i++){
        if(arr[i]==word[a]){
            a++;
            count++;
        }
    }
    if(count==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}