/***
  * Jinnat Morol
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
#include<set>
#include<sstream>
#include<stack>

using namespace std;

int main()
{
    long long int b,n,m=0,i,k,j,ck=0,dk=0,sum=0,ln,ln2;

    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
        ck+=arr[i];
    }
    sort(arr,arr+n);

    for(i=0; i<n; i++){
        sum+=abs(arr[n-1]-arr[i]);

    }
    cout<<sum<<endl;

}
