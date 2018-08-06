/***
  * Jinnat Morol id : 171-35-1957
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
   long long int a,b,c,i,j,n,k,ck=0;
   scanf("%lld" ,&n );
   for(i=1; i<=n; i++){
    for(j=i; j<=n; j++){
        k = (i^j);
        if(k>=j && k<=n && i+j>k){
            ck++;
        }
    }
   }
   printf("%lld\n",ck);
}
