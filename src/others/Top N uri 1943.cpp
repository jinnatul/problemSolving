#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    if(1<=a && a<=100){
    if(a==1){
        printf("Top 1\n");
    }else if(a>1&&a<=3)
    {
        printf("Top 3\n");
    }else if(a>3&&a<=5){

    printf("Top 5\n");
    }else if(a>5&&a<=10){

    printf("Top 10\n");
    }else if(a>10&&a<=25){
    printf("Top 25\n");
    }
    else if(a>25&&a<=50){
        printf("Top 50\n");
    }
    else if(a>50&&a<=100){
        printf("Top 100\n");
    }
    }

    return 0;
}
