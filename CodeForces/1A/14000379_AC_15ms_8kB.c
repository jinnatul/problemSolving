#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
     double n,m,a;
     double ans,row,colam;

     scanf("%lf %lf %lf",&n,&m,&a);

     row=ceil(n/a);
     colam=ceil(m/a);

     ans=row*colam;

     printf("%.0lf\n",ans);


     return 0;
}