#include<stdio.h>
#include<math.h>
int main()
{

  double a,b,c,d,e,f,R1,R2;
  scanf("%lf%lf%lf",&a,&b,&c);
  d=((b*b)-(4*a*c));
  if(d>=0 && a!=0){
       e=sqrt(d);
  R1=(-b+e)/(2*a);
  R2 =(-b-e)/(2*a);
  printf("R1 = %.5lf\n",R1);
  printf("R2 = %.5lf\n",R2);
   

  }
  else {

    printf("Impossivel calcular\n");
  }
    return 0;
}
