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

    long long int n,i,j,rev=0,ck=0;
    cin>>n;
    while(n%10==0)
        n/=10;
    rev = 0;
    ck = n;

    while(ck>0){
        rev = rev*10 + ck%10;
        ck/=10;
    }

    if(rev==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
