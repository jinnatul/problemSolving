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

   int a,b,c,ck=0,n,i,cc,dd,rem=0,rev=0,j=1;

   cin>>a>>b>>c;
   cc = (a+b+c)/2;
   dd = a+c;
   rem = b+c;

   i = min(dd, rem);
   ck = min(i, cc);

   cout<<ck*2<<endl;
}
