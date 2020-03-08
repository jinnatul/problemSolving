#include<stdio.h>
int main(){

int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
int min,max,sum;
sum=0; min=arr[0];max=arr[0];
for(i=0;i<n;i++){
sum +=arr[i];
  if(min >=arr[i]){
     min=arr[i];
                }
  if(max<=arr[i]){
     max=arr[i];
                 }
}//for

double avg = sum/n;

printf("MIN: %d   MAX: %d  SUM: %d  AVG: %d",min,max,sum,avg);

return 0;
}
