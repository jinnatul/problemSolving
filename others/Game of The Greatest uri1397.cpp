#include <stdio.h>

int main()
{
 int c, a, b;
 while(scanf("%d%d%d",&a,&b,&c)!=EOF){
if(a==b & b==c)
    printf("*\n");

 else if(a==b && a!=c && b!=c)
    printf("C\n");

 else if(a==c && a!=b && b!=c)
    printf("B\n");

 else if(b==c && a!=b && a!=c)
    printf("A\n");


 }
 return 0;
}
