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

   int a,b,n,i,j=1;

        while(scanf("%d",&n)==1 && (n>=0)){
        if(n==1)
        printf("Case %d: 0\n",j);

        for(i=0;i<14;i++)

        if(pow(2,i)<n && n<=pow(2,i+1))

        printf("Case %d: %d\n",j,i+1);
        j++;
      }
}
