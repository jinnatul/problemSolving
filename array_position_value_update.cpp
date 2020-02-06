#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
 
using namespace std;
 
int main()
{
    int n,i,j,t,pos,value;
     
    int arr[100];
    cin>>n;
    arr[n];
 
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
 
    cin>>pos>>value;
 
    for(i=0;i<n;i++){
        arr[pos-1]=value;
    }
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
