#include<stdio.h>
int main()
{
 int a,check=1,i;
 scanf("%d",&a);
 for(i=2;i<a;i++){
    if(a%i==0)
        check=0;
 }
 if(check==1){
    printf("prime number\n");
 }
 else {
    printf("not prime\n");
 }

    return 0;
}
