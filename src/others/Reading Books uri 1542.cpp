#include<stdio.h>
int main()
{
    int a,b,c,e;
    while(scanf("%d",&a) && a!=0){
    scanf("%d%d",&b,&c);
    e=(a*b*c)/(c-a);
    if(e>1)
    printf("%d paginas\n",e);
    else
    printf("%d pagina\n",e);
    }
    return 0;
}
