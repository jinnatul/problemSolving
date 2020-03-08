#include <stdio.h>
int main()
{
    int n,i,sum=0,a,b,c;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1))
            sum+=1;

    }

    printf("%d\n",sum);
}