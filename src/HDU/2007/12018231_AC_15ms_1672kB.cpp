#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

#define PI 3.1415927

int main() 
{
	 int n,i,a,b,c,ck=0,dk=0,all=0;
	 while(scanf("%d %d",&a, &b)!=EOF){
	 
	 if(a>b){
	 	swap(a,b);
	 }
	 for(i=a; i<=b; i++){
         
         if(i%2==0){
         	ck += (i*i);
         }
         else{
         	dk+=(i*i*i);
         }
	 }
	 
	printf("%d %d\n", ck,dk);
	ck=0,dk=0;
	  
}

}