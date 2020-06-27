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

     int a=0,b=0,c=0,n,ln,i,j;
     double x1,y1,x2,y2,x3,y3,ck,dk;

     while(scanf("%d",&a)){
        if(a==0) break;
      for(i=0; i<a; i++){
      scanf("%lf %lf %lf %lf %lf %lf",&x1, &y1, &x2, &y2, &x3, &y3);
      ck = (x1+x2+x3);
      dk = (y1+y2+y3);
    //  cout<<ck<<"  "<<dk<<endl;
      printf("%.1lf %.1lf\n",ck/3.0, dk/3.0);
      ck=0,dk=0;
      }
     }
}
