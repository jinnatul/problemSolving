#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>

using namespace std;


void factor(long long int n) {
	 	long long int i;
		for(i=2;i<=(long long int)sqrt(n);i++) {
			while(n % i == 0) {
				printf("%lld",i);
				if(i<n){
                    cout<<" ";
				}

				n /= i;
			}
		}
		if (n > 1) printf("%lld",n);
		printf("\n");
}

int main()
{
    long long int n,i,j,last,sum,ck=0;
    cin>>n;
    cout<<n<<": ";
    factor(n);
}
