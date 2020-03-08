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

int a[200005];
int b[200005];

int main()
{
    int n;
    cin>>n;
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    sort(b,b+200000);

    int k=0;
    for(int i=0;i<=200000;i++)
    {
        if(b[i]>=2)
        {
            k+=b[i]/2;
            //cout<<k<<endl;
        }
    }
    cout<<k/2<<endl;
}
