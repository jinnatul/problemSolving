#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

#define PI 3.1415927

int main() 
{
	double x1,x2,y1,y2,aa,bb,cc;
	
	while(scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2)!=EOF){

	aa = (x1-x2)*(x1-x2);
	bb = (y1-y2)*(y1-y2);
	cc = sqrt(aa+bb);

	printf("%.2lf\n", cc);
}

}