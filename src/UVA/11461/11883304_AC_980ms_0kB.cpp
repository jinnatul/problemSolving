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
    int a, b ,n,t,ck=0;

    while(cin>>a>>b){
    
    if(a==0 && b==0)
        break;
     for (int i=a; i<=b; i++){

        for (int j=1; j*j<=i; j++){
            if (j*j == i)
                ck++;
        }
 
      }
      cout<<ck<<endl;
      ck=0;

}

}