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
   long long int m,a,n, b, ck=0,i,j,sum=0,sum1=0;
   cin>>n>>m;
   int arr[n];

   for(i=0; i<n; i++){
    cin>>arr[i];
   }
   sort(arr,arr+n);
   for(i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
        if((arr[i]+arr[j])%m==0)
            ck++;
    }
   }
   cout<<ck<<endl;
}
