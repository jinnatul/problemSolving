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



int main()
{
    long long int n,i,j,my,ck=0,dk=0,ck1=0,dk1=0;
    cin>>n;
    char a;
    for(i=1; i<=n; i++){
       cin>>a;
       if(i%2==0){
        if(a=='b')
            ck++;
        else
            dk++;
       }
       else{
        if(a=='r')
            ck1++;
        else
            dk1++;
       }
    }
    my = min(max(ck,ck1), max(dk,dk1));
    printf("%lld\n",my);

}
