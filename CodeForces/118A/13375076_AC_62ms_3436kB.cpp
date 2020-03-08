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

using namespace std;


int main(){

     int a,b,c,n,ln,i,j,ck=0;
     char arr[101];
     cin>>arr;
     ln = strlen(arr);

     for(i=0; i<ln; i++){
        arr[i] = tolower(arr[i]);
        if(arr[i]=='a' || arr[i]=='o' || arr[i]=='y' || arr[i]=='e' || arr[i]=='u' || arr[i]=='i')
        continue;
     else
        cout<<"."<<arr[i];
     }
     cout<<endl;

}
