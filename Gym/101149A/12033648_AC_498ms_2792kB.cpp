#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int i,n,v,c,a,max;
	cin>>n;

	int arr[n];
    

	for(i=0; i<n; i++){
		cin>>arr[i];

	}
	max = arr[0];

	for(i=0; i<n; i++){

		if(arr[i]>max){
			max = arr[i];
			 
		}

	}
	cout<<max<<endl;
}