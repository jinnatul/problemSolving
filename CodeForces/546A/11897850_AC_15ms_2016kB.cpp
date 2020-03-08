#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
   int a,b,c,ck=0,dk=0,ek=0,fk=0,gk=0,hk=0,i,n,j,k;
   
   cin>>a>>b>>c;

   for(i=1;i<=c;i++){
   	  ck+=(i*a);
   }
   if(ck>b){
   	 dk = ck-b;
   	 cout<<dk<<endl;
   }
   else{
   	cout<<0<<endl;
   }

}