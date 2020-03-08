#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long p=0,c=0,n,x,tc=0;
	  cin >> n;
		for(long long i=0; i<n; i++)
		{
			cin >> x;
			if(x>0) {
				p+=x;
			}
			
			if(p==0 && x==-1)
			{
				tc++;
			}
			 if(p>0 && x==-1)
			{
				p--;
				
			}
		}
		cout << tc<<endl;
	
}