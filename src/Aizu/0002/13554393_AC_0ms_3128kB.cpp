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
    long long int n,i,j,a,b,c,aa,bb,digit,digit1,ck=0,dk=0;
    while(scanf("%lld %lld", &a, &b)!=EOF){

    aa = a +b;
    c = aa;
    while(aa){
        aa/=10;
        ck++;
        }

    cout<<ck<<endl;
    ck=0;
    }
}
