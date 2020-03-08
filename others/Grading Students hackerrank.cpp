#include<stdio.h>
int main()
{
    int a,i=0,b,c=0,d=0,t;
    scanf("%d",&t);
  while(t--){
        scanf("%d",&a);
        if(a%2==0)
        {
            for(i=2;i<=a;i=i+2)
            c=i+1;
             printf("%d\n",c);
        }


        }

    return 0;
}
