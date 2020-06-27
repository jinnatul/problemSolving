#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,i,j,ck=0,sum=0;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(i=0; i<n; i++){
        if(arr[i]<=25){
            ck++;
        }
        else{
            sum=abs(25-arr[n-1]);
        }
    }
    if(ck==n){
        cout<<"0"<<endl;
    }
    else{
        cout<<sum<<endl;
    }

}
