#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,i,j,ck=0;
    cin>>n;
    a = (n*n)/2;
    for(i=1, j=(n*n); i<=a && j>a; i++, j--){
        cout<<i<<" "<<j<<endl;
    }

}