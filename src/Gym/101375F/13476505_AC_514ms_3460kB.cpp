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

    int n,i,j;
    double aa, b,ck=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>aa;
        ck+=aa;
    }
    b = ceil(ck/5);
    printf("%.0lf\n",b);
}
