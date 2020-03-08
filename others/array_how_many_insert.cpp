#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,j,pos,value,t,arr[100];
    cin>>n;
    arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    for(j=0;j<t;j++){

    cin>>pos>>value;

    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
}
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
 
}
