#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t,i,n,j,start,end,mid;
    cin>>n;
 
    start =0;
    end = t-1;
 
    for(i=1;i<=n;i++){
        cin>>t;
        int arr[t];
 
        for(j=0; j<t; j++){
            cin>>arr[j];
        }
        sort(arr,arr+t);
 
        end = t/2;
 
        printf("Case %d: %d\n",i , arr[end]);
 
    }
 
}