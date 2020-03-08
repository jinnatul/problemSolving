#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
 
using namespace std;

int main()
{
    int i, n,t,ck,a,b,c,d,e,f;
    
    while(1){

        cin>>a>>b>>c;
        if(a<=0 || b<=0 || c<=0)
            break;
         d = a*a;
         e = b*b;
         f = c*c;
        if((d+e == f) || (d+f == e) || (e+f == d)){
            cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        }
    }
  
}