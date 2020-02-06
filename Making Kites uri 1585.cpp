#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        c=(a*b)/2;
        printf("%d\n",c);
    }

    return 0;
}
