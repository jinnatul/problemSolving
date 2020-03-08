#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
 

int main() {

	 int a,b,c,d,e,f,g,h,i,j,n,max;
	 cin >> n;
	 char arr[n];
	 cin>>arr;
     a=0,b=0;
	 for(i=0;i<n;i++){
	 
     if(arr[i]=='S' && arr[i+1]=='F'){
          a++;
	 	}
	else if(arr[i]=='F' && arr[i+1]=='S'){
	      b++;
	 	}
	 }
	 if(a>b){
	 	cout<<"YES"<<endl;
	 }
	 else {
	 	cout<<"NO"<<endl;
	 }
	  
 
}