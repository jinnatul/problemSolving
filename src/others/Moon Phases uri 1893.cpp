#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a<=b){
    if(i>=0 && i<=2)
        printf("nova\n");

    else if(i>=3 && i<=96)

        printf("crescente\n");

    else if(i>=97 && i<=100)
        printf("cheia\n");

    }
    else{
         if(i>=0 && i<=2)
        printf("nova\n");

    else if(i>=3 && i<=96)

        printf("minguante\n");

    else if(a>=97 && b<=100)
        printf("cheia\n");


    }
    return 0;
}
