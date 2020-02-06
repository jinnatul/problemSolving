#include<stdio.h>
int main ()
{
double nota,nota1,media;
while(scanf("%lf %lf",&nota,&nota1))
{
if (nota<0 || nota>10)
printf("nota invalida");
if(nota1<0 || nota>10)
printf("nota invalida");
if(0<=nota && nota<=10)
{
if(0<= nota1 && nota1<=10)
{
media = (nota+nota1)/2;
printf("media =  %.1lf",media);
break;
}
}
return(0);
}
}
