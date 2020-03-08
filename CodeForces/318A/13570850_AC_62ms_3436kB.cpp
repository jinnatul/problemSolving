#include<bits/stdc++.h>

using namespace std;

int main(){

  long long int a,b,c,n,ck,j,max,dk=0,i;

  scanf("%lld %lld",&a, &b);
  if(a%2==0)
    ck = a/2;
  else
    ck = a/2 +1;

  if(b<=ck)
    cout<<(b+(b-1))<<endl;
  else
    cout<<(b-ck)*2<<endl;

}