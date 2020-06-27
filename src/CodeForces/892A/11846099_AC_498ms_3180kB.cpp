/***
  * Name : Jinnat Morol
  * Date : 03/12/17
***/


#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdio.h>

using namespace std;

long long n,aa, i,arr[100010],sum,sum1;

int main()
{
    
    cin>>n;
    int arr[n],brr[n];
    sum=0;
    for(i=1; i<=n; i++){
        cin>>aa;
        sum += aa;
    }

    for(i=1; i<=n; i++){
        cin>>arr[i];
    }

    sort(arr+1, arr+1+n);

    sum1 = arr[n]+arr[n-1];

    if(sum1>=sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

 
}

