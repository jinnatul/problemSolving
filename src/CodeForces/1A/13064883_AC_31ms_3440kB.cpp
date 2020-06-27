/***
  *Jinnat Morol
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


using namespace std;


int main()
{
    double n,m,a;
     double ans,row,colam;

     scanf("%lf %lf %lf",&n,&m,&a);

     row=ceil(n/a);
     colam=ceil(m/a);

     ans=row*colam;

     printf("%.0lf\n",ans);

}
