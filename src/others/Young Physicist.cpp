#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	 
	int n,i,a,m,x,y,z,b,c;
	cin >> n;
	a=0,b=0,c=0;
	for(i=0;i<n;i++){
		cin >>x >> y >> z;
		a+=x;
		b+=y;
		c+=z;
	}
	if(a==0 && b==0 && c==0){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	
	 
}