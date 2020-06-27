#include<stdio.h>

int main()
{
   int n, first = 0, second = 1, next, c;
   scanf("%d",&n);

   for ( c = 0 ; c < n-1 ; c++ ) // run the loop until (n - 1) . because you are printing the last number out of the loop :p //
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d ",next);
   }
    printf("%d\n",first+second); // print the last number separately with a newline :p //

   return 0;
}
