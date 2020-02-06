#include <stdio.h>
int main()
{
    int a,b,c=0,x;
    scanf("%d%d", &a, &b);
    if(a<b)
    {
        for(x=a; x<=b; x++)
        {
            if(x%13==0) continue;
            c+=x;
        }
    }
    else if(a>b)
    {
        for(x=b; x<=a; x++)
        {
            if(x%13==0) continue;
            c+=x;
        }
    }
    printf("%d\n",c);
    return 0;
}
