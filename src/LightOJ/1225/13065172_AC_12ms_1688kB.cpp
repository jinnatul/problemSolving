/***
  *Jinnat Morol
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


using namespace std;


int main()
{
   long long int num, i,t,reverse = 0, remainder, temp;
   scanf("%lld",&t);
   for(i=1; i<=t; i++){

   scanf("%lld",&num);

   temp = num;

   while( temp != 0)
   {
      remainder = temp % 10;
      reverse = reverse * 10 + remainder;
      temp = temp / 10;
   }

   if (num == reverse)
       printf("Case %d: Yes\n",i);
   else
      printf("Case %d: No\n",i);
      num=0,temp=0,reverse=0;
   }
}
