#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    double n,m,a;
    
    double ans;
    
    
    
    while(scanf("%lf %lf %lf",&n,&m,&a)==3){
        
        
        
        double row = ceil(n/a);
        
        double column = ceil(m/a);
        
        
        
        ans =row * column;
        
        
        
        printf("%.0lf\n",ans);
        
        
        
    }
  
}

