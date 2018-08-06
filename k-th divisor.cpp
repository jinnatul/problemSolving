
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

const int aa = 3e7+100;
long long arr[aa];

int main()
{
   long long int a,b,c,d,i,j,ck=0,num;
   scanf("%lld %lld",&a,&b);

   for(i=1; i*i<=a; i++){
    if(a%i==0){
       arr[ck++] = i;
        if(i!=a/i)
                arr[ck++] = a/i;
    }
   }
   sort(arr,arr+ck);
    if(b>ck)
        printf("-1\n");
    else
        printf("%I64d\n",arr[b-1]);
}