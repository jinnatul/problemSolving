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
   int n,i,ck=90,aa;
   cin>>n;
   while(n--){
    cin>>aa;
    if(360 % (180- aa) ==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
   }
}
