#include<bits/stdc++.h>

using namespace std;

int main(){

  long long int aa,b,c,n,ck,j,max,dk=0,i;

  scanf("%lld %lld",&aa, &b);
  if(aa%2==0)
    ck = aa/2;
  else
    ck = aa/2 +1;

  if(b<=ck)
    cout<<(b+(b-1))<<endl;
  else
    cout<<(b-ck)*2<<endl;

}