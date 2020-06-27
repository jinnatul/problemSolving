#include<stdio.h>
//#include<string.h>
//#include<math.h>

//using namespace std;

int main()
{
    int n,i,j,t,pos,value;
    
    printf("size : ");
    scanf("%d",&n);
    int arr[n];

    printf("Element : ");
    for(i=0;i<n;i++){
      
       scanf("%d", &arr[i]);
    }
   
   printf("Delete position : ");
    scanf("%d",&pos);

    for(i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    //arr[pos-1]=value;

    for(i=0;i<n-1;i++){
        printf("%d ", arr[i]);
    }


}
