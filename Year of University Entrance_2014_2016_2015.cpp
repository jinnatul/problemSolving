#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i,m,j;
    cin>>n;
	int arr[n];
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	 
	cout<<arr[n/2];	
 
 
}