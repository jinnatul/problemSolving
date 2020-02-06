#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
 
using namespace std;
 
int main()
{
    int n,i,j,t,pos,value,first,last;
     
    int arr[100];
    cin>>n;
    arr[n];
 
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>first >>last;
    
    swap(arr[first-1],arr[last-1]);
 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
