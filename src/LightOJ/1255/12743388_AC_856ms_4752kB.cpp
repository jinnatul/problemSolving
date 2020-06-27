/***
  * Jinnat Morol
***/

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
    long long int a,b,n,m,i,j,ck=0,ln,ln2;
    string arr,brr;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr;
        ln = arr.length();
        cin>>brr;
        ln2 = brr.length();

        for(j=0; j<ln; j++){

             if(arr.compare(j,ln2,brr)==0){
                ck++;
             }
        }
        printf("Case %lld: %lld\n",i, ck);
        ck=0;

    }


}
