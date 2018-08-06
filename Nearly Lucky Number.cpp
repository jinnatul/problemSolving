#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	 
	int n,i,key,start,ln,end,mid,ass;
	string arr;
	cin>>arr;
	ln=arr.length();
	//cout<<ln;
	end=0;
	for(i=0;i<ln;i++){
		if(arr[i]=='4' || arr[i]=='7')
			end++;
	}
	if(end==4 || end==7){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	 

}