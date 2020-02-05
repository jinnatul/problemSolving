#include<stdio.h>
//#include<string.h>
//#include<math.h>
 
//using namespace std;
 
int main()
{
    int n,i,j,t,pos,value,first,last;
     
    printf("size : ");
    scanf("%d",&n);
    int arr[n];

    printf("Element : ");
    for(i=0;i<n;i++){
      
       scanf("%d", &arr[i]);
    }
    
    printf("input two Swap Element position : ");
    scanf("%d %d",&first, &last);
    
    swap(arr[first-1],arr[last-1]);
 
    for(i=0;i<n;i++){
        
        printf("%d ", arr[i]);
    }
}
