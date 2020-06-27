 #include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,i,j,ln,ck,sum,a,b,c;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>c;
        sum=0;
        for(j=0; j<c; j++){
            cin >> a >> b;

            sum+=(a*b);
        }
        cout<<sum<<endl;

    }
 
}