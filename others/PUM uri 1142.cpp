#include<stdio.h>
int main()
{
    int a,b=1,c=2,d=3,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("%d %d %d PUM\n",b,c,d);
        b+=4;
        c+=4;
        d+=4;

    }
    return 0;
}
