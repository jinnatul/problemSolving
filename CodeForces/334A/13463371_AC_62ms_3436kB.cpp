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

    int a,b,n,i,j,ck=0;
    cin>>n;
    a = (n*n)/2;

    for(i=1, j=(n*n); i<=a && j>a; i++, j--){
        cout<<i<<" "<<j<<endl;
    }
}
