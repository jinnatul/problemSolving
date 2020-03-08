#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

double f(double n)  
{  
    if(n < 0)  
    {  
        n = -n;  
    }  
    return n;  
}  
int main()  
{  
    double n;  
    while(~scanf("%lf",&n))  
    {  
        printf("%.2lf\n",f(n));  
    }  
    return 0;  
}  