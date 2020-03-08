#include<stdio.h>
int main()
{
    int N,X,i,a=0,b=0;
    scanf("%d",&N);
    if(N<10000){
        for(i=0;i<N;i++){
            scanf("%d",&X);

            if(X>=10 && X<=20){
        a++;
        }
        else {
            b++;
         }
    }

    }
    printf("%d in\n",a);

    printf("%d out\n",b);
    return 0;
}
