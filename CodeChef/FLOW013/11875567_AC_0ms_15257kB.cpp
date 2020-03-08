#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

//int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
//int lcm(int a, int b) { return (a*b)/gcd(a,b); }

int main()
{
    int t, n,i,j,a,b,c,aa,bb,ck=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a>>b>>c;
    
    if(a+b+c==180  && a!=0 && b!=0 && c!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
 
}

