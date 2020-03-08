#include<bits/stdc++.h>

using namespace std;

#define ll long long

vector<pair<ll, ll> >vc;

int main()
{
    ll n,m,i,j=0,ck=0;

    string arr,brr="hello";
    cin>>arr;

    n = arr.size();
    for(i=0; i<n; i++){
        if(arr[i]==brr[j]){ ck++;
           j++;
        }
    }
    if(ck==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
