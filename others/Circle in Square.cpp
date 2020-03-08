#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,pi=(2*acos(0.0));
    int i=1,t;
    scanf("%d",&t);
    while(t--){
     scanf("%lf",&a);
    e=(pi*a*a);  //circle area = pi*a^2;
    b=a*2;       // a hossa basaddo so bas = a*2 ,bas=chotorboz ar doirgo or prosto
    c=b*b;    // total doirgo * prosto
    d=c-e;
    printf("Case %d: %.2lf\n",i,d);
    i++;
    }
    return 0;
}
