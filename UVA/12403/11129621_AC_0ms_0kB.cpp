#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int K, aa, total = 0;
    
    char s[100];
    scanf("%d", &K);
    
    while (K--)
    {
        scanf("%s", s);
        
        if (s[0] == 'd')
        {
            cin>>aa;
            total += aa;
        }
        
        else
            printf("%d\n", total);
    }
     
     
}