#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
     int n,i,j,a,b,dk=0;
     long long int ck=0;
     
     string arr;
     cin>>arr;

     for(i=4; i<arr.length(); i++){
     	if(arr[i]=='l'){
     		if(arr[i-4]=='m' && arr[i-3]=='e'&&arr[i-2]=='t'&&arr[i-1]=='a'){
     			ck+=dk;
     		}
     	}
     	else if(arr[i-4]=='h'&&arr[i-3]=='e'&&arr[i-2]=='a'&&arr[i-1]=='v'&&arr[i]=='y'){
     		dk++;
     	}
     }
     cout<<ck<<endl;
     
}