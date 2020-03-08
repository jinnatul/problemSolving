#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    ll n,m,k,w,ck=0,i;

    scanf("%lld %lld %lld", &k, &n,&w);

    for(i=1; i<=w; i++){
        ck+=(i*k);
    }
    if(ck>n)
     cout<<ck-n<<endl;
    else cout<<"0"<<endl;

}
