#include<stdio.h>
int main()

{
    int T,n,i,j;
    int a[100];
   scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d", &n);
        for(j=0;j<n;j++){
        scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++){
            printf("%d\n",a[j]);
        }
    }

    return 0;
}
