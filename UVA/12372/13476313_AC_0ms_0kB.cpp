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
    int n,i,ln,a,b,c,ck1;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a>>b>>c;
        if(a<21 && b<21 && c<21)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
}
