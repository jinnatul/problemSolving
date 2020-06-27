#include<bits/stdc++.h>

using namespace std;

int main(){
int a=0,b,c,n,ck=0,j,max,dk=0,i;

while(cin>>n){
if(n==0)
break;
 ck = n;

while(n>=3){
a = n / 3;
dk = n % 3;
ck += a;
n = a + dk;
}

if(n==2)
ck++;
cout<<ck<<endl;
}
}
