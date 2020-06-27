/***
  *Jinnat Morol
***/

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

int main()
{
    char ck;
    int arr[26]={0},i,n;

    while(scanf("%c", &ck)==1){
        if(ck>=65 && ck<=92){
            arr[ck-65]++;
        }
        else if(ck>=97 && ck<=122){
            arr[ck-97]++;
        }
    }

    for(i=0; i<26; i++){
        if(arr[i]==0)
            break;
    }

    if(i==26){
        cout<<"pangram"<<endl;
     }
     else{
        cout<<"not pangram"<<endl;
     }

}
