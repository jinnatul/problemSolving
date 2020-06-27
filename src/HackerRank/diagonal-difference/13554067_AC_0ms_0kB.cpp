#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
 

int main() {

	 int n,i,j,k;
	 cin >> n;
	 int arr[n][n];

	 for(i=0;i<n;i++){
	 	for(j=0;j<n;j++){
	 		cin>>arr[i][j];
	 	}
	 }
	 int sum=0,sum1=0,sum2=0;

	  for(i=0;i<n;i++){
 
	 	for(j=0;j<n;j++){
	 		if(i==j){
	 		sum1+=arr[i][j];
	 		
	 		}

	 	    if(i+j==n-1){
	 	    	sum2+=arr[i][j];
	 	    }
	 	} 

	 }

	 sum = abs(sum1 - sum2);
 
	 cout<<sum<<endl;
 	 
}