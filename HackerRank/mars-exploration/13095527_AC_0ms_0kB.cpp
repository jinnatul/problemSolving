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
     int i,ln,n,ck=0;

     string arr;

     cin>>arr;
     ln = arr.size();

     for(i=0; i<ln; i+=3){
        if(arr[i]!='S') ck++;
        if(arr[i+1]!='O') ck++;
        if(arr[i+2]!='S') ck++;
     }
    cout<<ck<<endl;
}
