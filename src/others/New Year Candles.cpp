#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int a, b, div, mod;
    scanf("%d%d", &a, &b);
    int sum = a;
    while(a>=b)
    {
        div = (a/b);
        sum = sum + div;

        mod = (a%b);
        a= (div+mod);
         
    }
    printf("%d\n", sum);

}