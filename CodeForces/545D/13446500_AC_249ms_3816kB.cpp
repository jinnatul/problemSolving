#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;


int main() {

	int n,i,k=0,j,ck=0;
	cin>>n;
	int arr[n];

	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);

	for(i=0; i<n; i++){
		 if(k<=arr[i]){
            k+=arr[i];
            ck++;
		 }
	}
    cout<<ck<<endl;

}
