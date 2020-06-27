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

   for(i=n; i<=m; i++){
     ck+= (i*i);
   }
   cout<<ck<<endl;
}
