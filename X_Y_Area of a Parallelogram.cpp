#include<stdio.h>
#include<math.h>
int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy,a,b,c,s,d;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
        dx=(ax+cx)-bx;
        dy=(ay+cy)-by;
        a=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        b=sqrt(((dx-bx)*(dx-bx))+((dy-by)*(dy-by)));
        c=sqrt(((dx-ax)*(dx-ax))+((dy-ay)*(dy-ay)));
        s=(a+b+c)/2.0;
        d=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Case %d: %.0lf %.0lf %.0lf\n",i,dx,dy,2*d);
    }
    return 0;
}
