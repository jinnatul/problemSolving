#include <bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
 
int main()
{
	int a,b,n,i,j,key,mid,start,sum,ck,end;
    int arr[100][100];
	cin>>n;
	arr[n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}		
	}

    
    sum=0;
   	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum+=arr[i][j];
		}
		cout<<sum<<endl;
		sum=0;		
	}
   
}
