#include<stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<b&&a<c){
        printf("Otavio\n");
    }else if(b<a&&b<c){
    printf("Bruno\n");

    }
    else if(c<a&&a<b){
        printf("Ian\n");
    }
    else if(a==c || b==a|| c==b){
        printf("Empate\n");
    }

    return 0;
}
