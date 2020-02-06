#include <stdio.h>
#include <conio.h>

long decimalToBinary(long n);
int main() {

    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
          long decimal;

    scanf("%ld", &decimal);
    printf("Case %ld: %ld", i+1, decimalToBinary(decimal));

 getch();
 printf("\n");
    }

    return 0;
}


long decimalToBinary(long n) {
    int remainder;
 long binary = 0, i = 1;

    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
