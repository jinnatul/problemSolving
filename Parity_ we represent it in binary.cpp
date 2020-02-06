#include <stdio.h>
 
  int main()
{
 
    int t,i,s=0,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
 
    scanf("%d", &n);
    printf("Case %d: ",i);
    s=0;
    while (n > 0)
    {
        if(n%2!=0){
            s++;
            n=n/2;
        }
        else {
            n=n/2;
        }
 
    }
    if(s%2==0){
 
    printf("even\n");
    }
    else {
            printf("odd\n");
 
    }
    }
    return 0;
}
