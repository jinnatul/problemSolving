#include<stdio.h>
int main()
{

    int i,n,highet=0,pos=0;
    for(i=0;i<100;i++){
        scanf("%d",&n);
        if(highet<n){
            highet=n;
        pos=i;
     }
    }
printf("%d\n%d\n",highet,pos+1);
    return 0;
}
