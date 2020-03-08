#include<stdio.h>
int main()
{
    int a,b,i,c,t;
    while(scanf("%d%d",&a,&b) !=EOF){
        if(a==12 && b==25){
            printf("E natal!\n");
        }else if(a==12 && b<25){
            printf("E vespera de natal!\n");
        }else if(a==12 && b>25){
        printf("Ja passou!\n");
        }else if(a<12 && (b>25 || b<25)){
       int array[13]={0,31,29,31,30,31,30,31,31,30,31,30,25};
        int sum =0;
        int i,m,d;
        m=a;d=b;
        for(i=m+1;i<=12;i++){
        sum +=array[i];
        }
        int pp =array[m]-d;
        sum +=pp;
        printf("Faltam %d dias para o natal!\n",sum);

        }

    }
}
