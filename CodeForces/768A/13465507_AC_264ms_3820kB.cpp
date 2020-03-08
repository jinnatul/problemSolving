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

int main(){

    int a,b,n,i,ck=0,dk=0,low=0,high=0,j;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    low = arr[0];
    high = arr[n-1];

    for(i=0; i<n; i++){
         if(arr[i]==low)
            ck++;
         else
            break;
    }

    for(i=n-1; i>=0; i--){
         if(arr[i]==high)
            ck++;
         else
            break;
    }
    a = n - ck;
    if(a<0)
        cout<<"0"<<endl;
    else
        cout<<a<<endl;
}
