#include<stdio.h>
int main()
{
    int n,a,i,b=0,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
    if(a%2==0)
        b++;
        if(a%3==0)
            c++;
        if(a%4==0)
            d++;
        if(a%5==0)
            e++;
    }

printf("%d Multiplo(s) de 2\n",b);
printf("%d Multiplo(s) de 3\n",c);
printf("%d Multiplo(s) de 4\n",d);
printf("%d Multiplo(s) de 5\n",e);

    return 0;
}
