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
   long long int a, b, ck1=0,i,j,sum=0,sum1=0;
   scanf("%lld",&a);

   if(a%2==0){
     ck1 = a/2;
    printf("%lld\n", ck1);
   }
   else{
    ck1 = (((a/2)+1)*(-1));
     printf("%lld\n", ck1);
   }
}
