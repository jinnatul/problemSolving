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
   int n,i,ck=0,dk=0,h1,h2,m1,m2,s1,s2,aa;
   cin>>n;
   while(n--){
    cin>>h1>>m1>>s1>>h2>>m2>>s2;
    ck=0,dk=0;
    ck = ((h1*3600)+(m1*60) +s1);
    dk = ((h2*3600)+(m2*60) +s2);

    if(ck>dk)
        cout<<"Player2"<<endl;
    else if(ck==dk)
        cout<<"Tie"<<endl;
    else
        cout<<"Player1"<<endl;

}

}
