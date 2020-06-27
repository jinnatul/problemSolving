#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,n,j,k=0,ara[100000];
    double sum=0,res=0.0;

    scanf("%d", &n);
    int a[2*n];

    for(i=0; i<(n*2); i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    double avg = sum/n;

    for(i=0; i<(n*2); i++)
    {
        for(j=i+1; j<i+2; j++)
        {
            ara[k] = (a[i]+a[j]);
            k++;
        }
    }

    for(i=0; i<(n*2); i+=2)
    {
        res = res + abs((sum/n)-ara[i]);
    }

    printf("%.9lf\n", res);

    return 0;
}