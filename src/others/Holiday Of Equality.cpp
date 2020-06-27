#include <bits/stdc++.h>

using namespace std;

int n,i,len, number,result=0;
int main(){
    
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
            scanf("%d",&arr[i]);
    sort(arr, arr+n);
        for(i=0; i<n; i++){
             result += arr[n-1] - arr[i];
        }printf("%d\n",result);
    return 0;
}