#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
   int a,b,c,ck=0,dk=0,ek=0,fk=0,gk=0,hk=0,i,n,j,k;
   
   cin>>n;
   char arr[n];
   cin>>arr;

   for(i=1; i<n; i++){
       
       if(arr[i]==arr[i-1]){
       	ck++;
       }   	   
   }
   cout<<ck<<endl;

}