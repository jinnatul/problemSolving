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

long long t, n;

int main()
{
     int b,i,j,ln,k,ck=0,key,n,a,c;
     int crr[101];
     string arr,brr;
     cin>>n;
     cin>>arr;
     cin>>k;

     for(i=0; i<n; i++){
        char ck = arr[i];

        if(ck>='a' && ck<='z'){
            ck = (ck - 'a' + k)%26 + 'a';
        }
        else if(ck>='A' && ck<= 'Z'){
            ck = (ck - 'A' + k)%26 + 'A';
        }
        arr[i] = ck;
     }
     cout<<arr<<endl;

}
