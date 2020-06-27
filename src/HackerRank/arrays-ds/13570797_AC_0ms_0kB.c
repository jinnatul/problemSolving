#include<stdio.h>
int main()
{
  int arr[10000];
  int N,i,j;
  scanf("%d",&N);
    if(1<=N<=1000){
  for(i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }
  for(j=N-1;j>=0;j--){
    printf("%d ",arr[j]);
  }

    }
    return 0;
}