#include<stdio.h>

int main()
{

    long long int a,b,i,j,m,n,ck=0,dk=0;
    scanf("%lld", &n);


    while(n--){
      scanf("%lld", &a);
      dk = a%10;
      while(a>9){
        a/=10;
      }

     printf("%lld\n", a+dk);
    }
}
