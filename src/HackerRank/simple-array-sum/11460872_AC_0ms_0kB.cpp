/**
 *    author:  Jinnat Morol
 *           
**/

#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,i,j,k,sum=0;
     cin >> n;
     int arr[n];

     for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
     }
     
     cout<<sum<<endl;
     
}