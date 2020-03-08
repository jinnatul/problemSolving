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

int main(){

    int a,b,n,i,j,ln,ck=0,dk=0;


    cin>>n;

    for(i=1; i<=n; i++){
        cin>>a>>b;

        for(j=a; j<=b; j++){
            if(j%2!=0){
                ck+=j;
            }
        }

        printf("Case %d: %d\n",i,ck);
        ck=0;
    }
}
