#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n,m,i,ck=0,a,b,j,k;

    string a1,a2,a3="",a4="",xx;
    a1 = "312831303130313130313031";
    a2 = "312931303130313130313031";
    a3 = a1+a1+a2+a1+a1;

    cin>>n;

    while(n--){
        cin>>xx;
        a4+=xx;
    }

    if(a3.find(a4)!=-1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
