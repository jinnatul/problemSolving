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
    int n,i,j,k,ck=0,w,h,x,y,r,xx,yy;

    cin>>n;

    for(i=1; i<=n; i++){
        for(j=i; j<n; j++){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<"#";
        }

        cout<<endl;
    }

}
