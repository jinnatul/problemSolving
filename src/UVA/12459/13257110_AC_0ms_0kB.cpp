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

    long long int n,i,j,ck=0,arr[81]={1,1};

    for(n=2; n<81; n++)
        arr[n]=arr[n-1]+arr[n-2];
    while(cin>>n){
        if(n==0) break;
      printf("%lld\n", arr[n]);
    }

}
