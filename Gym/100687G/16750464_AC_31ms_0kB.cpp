#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int i,n,j,k=0;
    double sum=0;

    scanf("%d", &n);
    int brr[2*n];
    double ara[n];

    for(i=0; i<(n*2); i++)
    {
        scanf("%d", &brr[i]);
        sum = sum + brr[i];
    }

    k = 0;
    for(i=0; i<(n*2); i++)
    {
        for(j=i+1; j<i+2; j++)
        {
            ara[k] = (brr[i]+brr[j]);
           // printf("%.9lf\n", ara[k]);
            k++;
        }
    }
    double ans = 0;

    for(i=0; i<(2*n); i+=2){
        ans+=abs((sum/n)-ara[i]);
        //cout<<sum<<endl;
    }

    printf("%.9lf\n", ans);

    return 0;
}