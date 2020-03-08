#include<bits/stdc++.h>

using namespace std;

int ck=0,n,i,aa,arr[1005];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>aa;
		arr[aa]++;

		ck=max(ck,arr[aa]);

	}
	cout<<n-ck;

}
