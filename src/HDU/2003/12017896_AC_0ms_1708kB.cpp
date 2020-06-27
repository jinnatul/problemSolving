#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

double aa(double a){
	if(a<0){
		a= -a;

	}
	return a;
}

int main()
{
	double n;
    while(~scanf("%lf",&n)) 
    { 
        printf("%.2lf\n",aa(n)); 
    }
}