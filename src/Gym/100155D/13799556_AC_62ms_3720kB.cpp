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
   long long int a,b,i,n,j,k,ck=0;
   cin>>n>>k;
   int arr[n];
   for(i=0; i<n; i++){
    cin>>arr[i];
    ck+=(arr[i]/k);
   }
   cout<<ck<<endl;

}