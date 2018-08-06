#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define pf printf

using namespace std;


int main()
{
     int arr[4],i,k,m,j,n;

     for(i=0; i<4; i++){
          cin>>arr[i];
     }
     sort(arr,arr+4);

     if(arr[0] + arr[1] > arr[2]  || arr[1] + arr[2] > arr[3]){
          pf("TRIANGLE\n");
     }
     else if(arr[0] + arr[1] == arr[2]  || arr[1] + arr[2] == arr[3]){
          pf("SEGMENT\n");
     }
     else {
          pf("IMPOSSIBLE\n");
     }

}