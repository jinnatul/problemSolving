#include<stdio.h>
//using namespace std;

int main()
{
    int n,i,j,pos,value,t;
     
    printf("size : ");
    scanf("%d",&n);
    int arr[n];

    printf("Element : ");
    for(i=0;i<n;i++){

        scanf("%d", &arr[i]);
    }
    printf("how many number add : ");
    scanf("%d",&t);

    for(j=0;j<t;j++){
     
     printf("First input position and 2nd input add value : ");
    scanf("%d %d",&pos, &value);

    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }

    arr[pos-1]=value;
    n++;
}
    for(i=0;i<n;i++){
       printf("%d ", arr[i]);

    }
 
}
