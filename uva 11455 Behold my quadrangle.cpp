#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,i,n,j,ck=0;
     long long int a,b,c,d,aa,bb,cc;   
    cin>>n;

    for(i=1;i<=n;i++){
          
          cin >> a >> b >> c >> d;

          if(a==b && b==c && c== d && d == a){
            
            cout<<"square"<<endl;
          }
          else if((a==c && b==d) || (a==b && c==d) || (a==d && b==c)){
           
            cout<<"rectangle"<<endl;

          }
          else if((a<=d+b+c) && (b<=a+d+c) && (c<=a+b+d) && (d<=a+b+c)){
            
            cout<<"quadrangle"<<endl;
          }
          else{
            
            cout<<"banana"<<endl;
          }

    }

}
