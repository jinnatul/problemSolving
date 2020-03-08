#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>


using namespace std;

int main()
{
    long long int n,t,a,b,sum;

    while((cin>>n) && n!=0){
        if(n<=1000000){
            cout<<n<<endl;
        }
        else if(n>1000000 && n<=5000000){
            a = n*.10;
            sum = n - a;
            cout<<sum<<endl;
        }
        else if(n>5000000){
            a = n*.20;
            sum = n-a;
            cout<<sum<<endl;   
        }
    }


}