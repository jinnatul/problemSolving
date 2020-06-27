#include<stdio.h>
int main()
{
  int i,x;
  double a,sum=0.0;
  
  scanf("%d", &x);
  
  for(i=0; i<x; i++)
  {
    scanf("%lf", &a);
    sum = sum+a;
  }
  
  printf("%lf\n", sum/x);
  
  return 0;
}