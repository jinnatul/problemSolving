#include<bits/stdc++.h>

using namespace std;

//int gcd(int a, int b) { if (b == 0)  return a;   else return gcd(b, a%b); }
//int lcm(int a, int b) { return (a*b)/gcd(a,b); }

int main()
{
    int t, n,i,j,a,b,c,ck=0;
    while(cin>>a>>b>>c){
       
       if(a==0 && b==0 && c==0)
        break;
       int aa,bb,cc,as,ad,af,ag;
       aa = c*c + b*b;
       bb = a*a + c*c;
       cc = a*a + b*b;
       as = a*a;
       ad = b*b;
       af = c*c;

       if(aa== as || bb == ad || cc == af){
        cout<<"right"<<endl;
       }
       else{
        cout<<"wrong"<<endl;
       }

    }
 
}
