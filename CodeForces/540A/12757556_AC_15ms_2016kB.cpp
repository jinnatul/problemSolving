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
   int a,b,c,ck=0,i,j,n,t,k,dk=0;
   cin>>n;
   string arr,brr;
   cin>>arr>>brr;

   for(i=0; i<n; i++){

        ck += min(10-abs(arr[i]-brr[i]), abs(arr[i]-brr[i]));
        //cout<<ck<<endl;

   }
   cout<<ck<<endl;

}
