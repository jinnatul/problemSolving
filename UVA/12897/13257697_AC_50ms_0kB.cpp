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

using namespace std;

char arr[1000000];

int main(){

    int n,i,j,k,l,t,m;
    char a,b,brr[128];
    cin>>t;
    while(t--)
    {
        scanf("%s",&arr);
        scanf("%d",&n);

        for(i=0;i<128;i++)
            brr[i]=i;

        while(n--)
        {
            cin>>a>>b;

            for(i='A';i<='Z';i++)
            {
                if(brr[i]==b)
                  brr[i]=a;
            }
        }

         for(i=0; arr[i]; i++)
        {
            printf("%c",brr[arr[i]]);
        }
        cout<<endl;
    }
}
