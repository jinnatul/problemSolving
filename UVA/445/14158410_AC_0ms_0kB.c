#include<stdio.h>
#include<string.h>

int main()
{
     int a,b,i,j,n=0,t,k,ck=0,num=0,c,d;
     char aa,bb;
     char arr[500];
     while(gets(arr)){
     int ln = strlen(arr);
     ck=0;
     for(i=0; i<ln; i++){

            switch(arr[i]) {
                case '0' ... '9':
                    num += arr[i]-'0';break;
                case 'b':
                    for(j = 0; j < num; j++)
                        printf(" ");
                    num = 0;
                    break;
                case '!':
                    printf("\n");
                    break;
                default:
                    for(j = 0; j < num; j++)
                        printf("%c", arr[i]);
                    num = 0;
            }
        }
        printf("\n");
     }
}
