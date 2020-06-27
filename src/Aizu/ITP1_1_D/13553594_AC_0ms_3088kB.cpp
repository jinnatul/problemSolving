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

     int n,i,j,a,b,c,h,m,s,ck=0,dk=0;
     cin>>n;
     h = (n/3600);
     n %=3600;
     m = n/60;
     n%=60;
     s = n;
     cout<<h<<":"<<m<<":"<<s<<endl;
}
