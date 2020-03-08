#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        
        if(arr[i]%2==0){

            printf("%d is even\n", arr[i]);
        }
        else{

             printf("%d is odd\n", arr[i]);
        }
    }
     
}