
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include <stdlib.h>

using namespace std;

  
  int main() {
   
   int n,i,j,ck=0,bk=0;
   cin>>n;
   int rr[n];
   for(i=0;i<n;i++){
    cin>>rr[i];

    }
   for(i=1; i<n-1; i++){
 
    if((rr[i] > rr[i+1]) && (rr[i] > rr[i-1])){
        ck++;
     //   
    }
    else if((rr[i] < rr[i+1]) && (rr[i] < rr[i-1])){
             ck++;
       //  cout<<bk<<endl;
    }
   
   }
   cout<<ck<<endl;
 
}