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

    int a,b,n,i,ck=0,g=0,j;
    cin>>n;
    for(i=1; i<=n; i++){
    cin>>a>>b;
    g = (a+(abs(b-a)))*4;
    ck = g+19;

    printf("Case %d: %d\n",i,ck);
    }
}
