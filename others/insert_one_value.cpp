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

   printf("insert position : ");
    scanf("%d",&pos);

printf("insert value : ");
    scanf("%d",&value);
 
    for(i=n;i>=pos;i--){
       
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;

    for(i=0;i<=n;i++){
       printf("%d ", arr[i]);
    }

}
