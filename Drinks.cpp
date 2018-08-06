#include<stdio.h>
//#define MAX_SIZE 100
int main()
{
    int arr[100];
    int sum=0,i,n;
    double a;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
       sum+=arr[i];
     //  b=a/n;
a=(double)sum/n;

    }

  printf("%lf",a);
    return 0;
}