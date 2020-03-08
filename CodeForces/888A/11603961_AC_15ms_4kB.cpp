#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<vector> 

 using namespace std;
 
int main() {

     int n,i,j,a,ck=0;
     cin>>n;
     
     int arr[n];
     for(i=0;i<n;i++){
        
        cin>>arr[i];
     }

     for(i=1; i<n-1; i++){

        if((arr[i]<arr[i-1]) && (arr[i]<arr[i+1])){
            ck++;
        }
        else if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            ck++;
        }

     }
     cout<<ck<<endl;
}