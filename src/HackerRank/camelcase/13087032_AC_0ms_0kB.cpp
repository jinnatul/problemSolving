#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
	 int ln,a,r,c,i,j,ck=1;
	 
	 string arr;
	 
	 cin>>arr;
	 ln = arr.size();
	 
	 for(i=0; i<ln; i++){
	 	if(arr[i]>=65 && arr[i]<=92)
	 	ck++;
	 }
	 cout<<ck<<endl;
}
