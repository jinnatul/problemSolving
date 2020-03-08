#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>


using namespace std;

int main(){

int a=0,b=0,c,n,ck=0;

while(cin>>n){
if(n==0)
break;
 ck = n;

while(n>=3){
a = n / 3;
b = n % 3;
ck += a;
n = a + b;
}

if(n==2)
ck++;
cout<<ck<<endl;
}
}
