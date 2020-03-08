#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
   float i,sum ,a,b,c,d,e,s,f,m ,x,y;
   int n;
   
   cin>>a >>b >>c;
   cin>>d >>e>>f;
   cin>>n;
   m=ceil((a+b+c)/5);
   s=ceil((d+e+f)/10);
   
   if(m+s<=n){
	   
		   cout<<"YES"<<endl;
	   }
	   else{
		   cout<<"NO"<<endl;
	   }
 
}