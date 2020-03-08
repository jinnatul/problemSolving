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
	 int n,i,a,b,c,ck=1;
	 while(scanf("%d",&n)!=EOF){
	 int arr[n];

	 for(i=0;i<n;i++){
	 	cin>>arr[i];

	 	if(arr[i]%2!=0){
	 		ck*=arr[i];
	 	}
	 }
	 cout<<ck<<endl;
	 ck=1;

}

}