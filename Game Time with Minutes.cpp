#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    e=c-a;
    if(e<0){
        e=24+(c-a);
    }
    f=d-b;
    if(f<0)
    {
        f=60+(d-b);
         e--;
    }
    if(a==c && b==d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }
    return 0;
}
