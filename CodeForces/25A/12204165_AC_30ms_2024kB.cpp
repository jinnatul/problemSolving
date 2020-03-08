#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	int n,position1=0,position2=0,y=0;
   scanf("%d",&n);
   int no,i,x=0;
   for(i=0;i<n;i++)
   {
       scanf("%d",&no);
       if(no%2==0)
       {
         x++;
         position1=i+1;
       }
       if(no%2!=0)
       {
         y++;
         position2=i+1;
       }


   }
   if(x==1)
   printf("%d\n",position1);
   else
   printf("%d\n",position2);
}