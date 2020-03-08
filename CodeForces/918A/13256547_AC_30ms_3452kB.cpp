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

int f[1500],arr[1500];

int main(){

    int n,i,j,ck=0;

    f[1]=1,f[2]=1,arr[1]=1;

    for(i=3; i<50; i++){
      f[i] = f[i-1]+f[i-2];
      if(f[i]>1000) break;
      arr[f[i]]=1;
   }

    cin>>n;
    for(i=1; i<=n; i++){
        if(arr[i])
            cout<<"O";
        else
            cout<<"o";
    }

}
