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

long long int gcd(long long int a, long long int b);

int main()
{

    long long int n,i=0,j=0,a,b,c,ln,my=0,ck=0;

    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}

long long int gcd(long long int a, long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
