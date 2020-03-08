#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n,m,t,i,ck=0,a,b,j,k=0;

    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n];
        ll sum =0;
        for(i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

            ck=0,k=0;
            k = arr[0];
            for(i=1; i<n; i++){
                k = __gcd(arr[i], k);
            }
           cout<<k<<" "<<sum/k<<endl;
        }

}
