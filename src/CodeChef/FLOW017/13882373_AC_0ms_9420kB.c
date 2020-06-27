#include<stdio.h>

int main()
{

    long long int a,b,c,i,j,m,n,ck=0,dk=0;
    scanf("%lld", &n);


    while(n--){
     scanf("%lld %lld %lld", &a, &b, &c);

     if((a<b & b<c) || (c<b && b<a))
        printf("%lld\n",b);
     else if((a<c && c<b) || (b<c && c<a))
        printf("%lld\n", c);
     else if((b<a && a<c)||(c<a && a<b))
        printf("%lld\n",a);
       a=0,b=0,c=0;
    }
}
