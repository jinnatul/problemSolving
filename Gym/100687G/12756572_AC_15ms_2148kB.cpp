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
   int a,b,c,i,j,n,t,k,dk=0;
   double sum=0,ck=0;
   vector<double>my;
   cin>>n;
   int arr[n],brr[2*n];
   for(i=0; i<(2*n); i++){
       cin>>brr[i];
       ck+=brr[i];
   }
   k=0;
   for(i=0; i<(2*n); i++){
        for(j=i+1;j<i+2 ;j++ ){
          //  if(j>=n)
          //  break;
       my.push_back(brr[i]+brr[j]);

   }

}
for(i=0; i<(2*n); i+=2){
    sum+=abs((ck/n)-my[i]);
    //cout<<sum<<endl;
}
printf("%.9lf\n",sum);

}
