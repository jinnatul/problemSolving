#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	  int a,n,m,aa,b,i,bb;

	  while(scanf("%d %d",&a,&b)==2){
	  	m = a;
	  	 for(i=0;a>=b;i++){
	  	 	aa = a/b;
	  	 	bb = a%b;
	  	 	m += aa; 
	  	 	a = aa+bb;
	  	 }
	  	 cout<<m<<endl;
	  }
}