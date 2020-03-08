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
    int n,a,b,ck=0,i;
    cin>>n;
    set<int>aa,bb;
    while(n--){
        cin>>a>>b;
       aa.insert(a);
       bb.insert(b);
    }

    if(aa.size()==1 || bb.size()==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
