#include<stdio.h>
 
int main()
{
    int a,b,n,i,j,key,mid,start,end;
    
    printf("size : ");
    scanf("%d",&n);
    int arr[n];
    
    printf("Element : ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    start = 0;
    end = n-1;

    printf("Search element : ");
    scanf("%d", &key);

    while(start<=end){

        mid=(int)(start+end)/2;
       
        if(arr[mid]==key){
            printf("%d ",mid+1); 
            break;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
         
    }
    if(start>end){
        printf("not found\n");
    }
    

}
