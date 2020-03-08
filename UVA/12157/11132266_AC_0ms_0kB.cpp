#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int i, n,t, num, mile , juice ;
    cin>>t;
    
    for (int i = 1; i <= t; ++i)
    {
        cin>>n;
        mile  = juice  = 0;
        while (n--)
        {
            scanf("%d", &num);
            mile  += (num / 30) * 10 + 10;
            juice  += (num / 60) * 15 + 15;
        }
        printf("Case %d: ", i);
        
        if (mile  < juice )
            printf("Mile %d\n", mile);
        else if (mile  == juice )
            printf("Mile ");
        
        if (juice  <= mile )
            printf("Juice %d\n", juice );
    }
}
 

