#include<stdio.h>
int main()
{
   int n,a,m,i,j,T,sum,temp,check;
   scanf("%d",&T);
   while(T--){
    scanf("%d%d",&m,&n);
    if(m>n){
        temp=m;
        m=n;
        n=temp;
    }
  sum=0;

    for(j=m;j<=n;j++){
        a=j;
        check =1;
        if(a==1)
            check=0;
            for(i=2;i<a;i++){
                if(a%i==0)
                    check=0;
            }
                if(check==1){
                    sum=sum+a;
                }
    }

    printf("%d\n",sum);

   }

    return 0;
}
