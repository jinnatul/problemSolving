#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
	int ln,n,i,j,a=0,t;
 
	int arr[4];
	for(i=0;i<4;i++){
		cin>>arr[i];
	}
	sort(arr,arr+4);
	for(i=0;i<4;i++){
		if(arr[i]==arr[i+1]){
			a++;
		}
	}
	cout<<a<<endl;
 
	
    
}