#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    ll n,m,k,w,ck=1,i,j;
    cin>>n>>m;
    ll arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n-1; i++){
        k = arr[i+1]-arr[i];
        if(k<=m) ck++;
        else ck = 1;
    }
    cout<<ck<<endl;

}
