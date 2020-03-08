#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int n,i,a,b,j,ln,ck;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;

        if(a>=b && (a+b)%2==0){
            ln = (a+b)/2;
            ck = (a-b)/2;
            printf("%d %d\n",ln,ck);
        }
        else{
            cout<<"impossible"<<endl;
        }
    }
     
     
}