#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,a,ck=102,sum=0;

    cin>>n;
    while(n--){
        cin>>a;
        sum+=a;
        if(a%2!=0 && a<ck)
            ck = a;
    }
    if(sum%2==1)
        cout<<sum<<endl;
    else if(ck%2==1)
        cout<<sum-ck<<endl;
    else
        cout<<"0"<<endl;
}
