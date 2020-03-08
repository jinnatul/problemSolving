/**
 *    author:  Jinnat Morol
 *           
**/
  #include<stdio.h>
  
  int main() {
   
   char arr[1000];
  
  while(gets(arr)) {
 
  int i, j;
  int st = -1, ed = -1;
  
  for(i = 0; arr[i]; i++) {
  
   if(arr[i] != ' ') {
    st = i, ed = i;
   
    while(arr[ed] != ' ' && arr[ed] != '\0') ed++;
    
    for(j = ed-1; j >= st; j--)
     printf("%c", arr[j]);
    i = ed-1;
  
   } else
  
    printf(" ");
  }
 
  puts("");
 }
    return 0;
}