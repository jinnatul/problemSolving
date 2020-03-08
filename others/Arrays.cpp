#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
 

int main() {
    int n1,n2,k,m,i;
    int arr1[10000005],arr2[10000005];
 
    cin>>n1>>n2>>k>>m;  

   for (i=0 ; i<n1; ++i)  
    cin>>arr1[i];  

   for (i=0 ; i<n2; ++i)  
    cin>>arr2[i];  

   sort (arr1, arr1+n1);  
   sort (arr2, arr2+n2);  
 
  if (arr1[k-1] < arr2[n2-m])  
     cout<< "YES" <<endl;  
  else  
     cout<< "NO" <<endl;  
  
}