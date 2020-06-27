#include<stdio.h>

int main()
{
    int n,i,j,ck=0,even=0,odd=0,t;
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d",&n);
        if(n%2==1){
            odd++;
        }
        else{
            even++;
        }
    }
    if(even>=odd){
        printf("%d\n",odd);
    }
    else{
        ck = even+(odd-even)/3;
         printf("%d\n",ck);
    }
}
