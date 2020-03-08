#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long p;
	while(scanf("%lld",&p)==1)
	{
		long long  count=0,odd=0;
		while(p>1)
		{
			if(p%2==1)
		{
			p--;
			odd =1;
		}
		count += p/2;
		p=p/2;
		if(odd ==1)
		{
			p++;
			odd--;
		}
		}
		printf("%lld\n",count);
	}
}