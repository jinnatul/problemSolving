#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main ()
{

    int a,b,vi,c,n,i,sum=0,j,ck=0;
    cin>>n>>c;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++){
        ck = max(ck,arr[i]-arr[i+1]-c);

    }
     cout<<ck<<endl;
}

