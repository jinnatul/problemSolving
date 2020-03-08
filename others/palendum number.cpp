#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder,temp;
   
   int T,i;
   scanf("%d",&T);
   for(i=1;i<=T;i++){
   scanf("%d", &num);
   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   }

   if(reverse_num==num)
       
      printf("yes\n");
   else
       
      printf("no\n");}
   return 0;
}
