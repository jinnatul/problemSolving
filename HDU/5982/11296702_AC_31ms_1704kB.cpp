 #include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,t,a,b,sum;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>t;
        
        sum=0;
        for(int j=0; j<t; j++){
            cin>>a>>b;
            sum+=(a*b);
        }
        cout<<sum<<endl;

    }
   


}