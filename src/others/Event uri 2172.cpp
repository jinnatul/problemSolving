#include<stdio.h>
int main()
{
    double a,b,c;
    while(1){
            scanf("%lf%lf",&a,&b);
        if(a==0 && b==0)
        break;
        printf("%.0lf\n",a*b);

    }

    return 0;
}
