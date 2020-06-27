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

   double i,a,b,c,n,m,sum=0,ck=0;
   vector<double>morol;

   scanf("%lf %lf",&n, &m);

   for(i=1; i<=n; i++){
     scanf("%lf %lf",&a, &b);
     morol.push_back(a/b);

   }
   sort(morol.begin(),morol.end());

   ck = ( m*morol[0] );
   printf("%.8lf\n",ck);


}
