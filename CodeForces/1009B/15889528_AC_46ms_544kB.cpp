#include<bits/stdc++.h>

using namespace std;

#define ll  long long
#define mx 2147483647

vector<pair<ll, ll> >vc;

ll lcm(ll x, ll y)
{
    ll xx = __gcd(x, y)%mx;
    ll yy = (x*y) %mx;

    return (yy / xx)%mx;

}

int main()
{
    ll n,m,a,i,j=0,ck=0,x=1;

    string arr,brr="",crr="";

    cin>>arr;

    n = arr.size();

    for(i=0; i<n; i++){
        if(arr[i]=='2'){
            for(j=i; j<n; j++){
                if(arr[j]!='1')
                    brr+=arr[j];
                else
                    crr+=arr[j];
            }break;
        }
        else{
            crr+=arr[i];
        }
    }
    sort(crr.begin(), crr.end());

    cout<<crr+brr<<endl;

}
