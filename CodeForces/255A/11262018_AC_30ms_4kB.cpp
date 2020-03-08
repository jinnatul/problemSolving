 #include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int i,j,k,n,ck;

    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];

    }
   int sum,sum2,sum3;
    
    sum=0;
    for(i=0; i<n; i+=3){
        sum+=arr[i];
    }

    sum2=0;
    for(j=1; j<n; j+=3){
        sum2+=arr[j];
    }

    sum3=0;
    for(k=2; k<n; k+=3){
        sum3+=arr[k];
    }
 
    if((sum > sum2) && (sum > sum3)){
        cout<<"chest"<<endl;
    }
    else if((sum2 > sum) && (sum2 > sum3)){
        cout<<"biceps"<<endl;
    }
    else if((sum3 > sum) && (sum3 > sum2)){
        cout<<"back"<<endl;
    }
 
 
}