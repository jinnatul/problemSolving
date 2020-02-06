#include<stdio.h>
int main()
{

     int n,i,a,b,c,T;
     scanf("%d",&T);
      while(T--){
          scanf("%d",&n);
     a=0,b=1;
     for(i=1;i<=n;i++){
         if(i==n)

        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
     }
      }
    return 0;
}
