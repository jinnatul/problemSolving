#include<bits/stdc++.h>

using namespace std;

int arr[100],brr[100];

int main()
{
    int a,b,c,i,j,n,d,r,m,ck=0,sum=0,t,dk=0,k;
    while(scanf("%d %d %d", &n, &d, &r), n || d || r){

    sum=0;
    for(i=0; i<n; i++){
       scanf("%d", &arr[i]);

    }
    sort(arr, arr+n);

    for(i=0; i<n; i++){
        scanf("%d", &brr[i]);

    }
    sort(brr, brr+n, greater<int>());
 
    for(i=0; i<n; i++){
        ck = arr[i] + brr[i];

        if(ck>d){
            sum+=((ck-d)*r);
        }
    }
    printf("%d\n",sum);

}

}
