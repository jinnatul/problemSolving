#include<stdio.h>

int main()
{

    long long int a,b,c,i,j,m,n,ck=0,dk=0;
    scanf("%lld", &n);

    while(n--){
      scanf("%lld", &a);
      int ck = 1;
      for(i=2; i*i<=a; i++){
        if(a%i==0)
            ck = 0;
      }
      if(ck==1)
        printf("yes\n");
      else
        printf("no\n");
    }
}
