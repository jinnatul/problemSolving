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
     int n,t,i,s,g,j,k,ck=0,a,b,c;
     cin>>n;
     for(i=1; i<=n; i++){
        cin>>a;
        int arr[a];

        for(j=0; j<a; j++){
            cin>>arr[j];
        }
        sort(arr, arr+a);

        printf("Case %d: %d\n",i,arr[a/2]);
     }
}
