/***
  * Jinnat Morol
***/

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
#include<set>
#include<sstream>
#include<stack>

using namespace std;
int morol(int a, int b);

int main(){

  long long int a,t,b,c,d,j,n,i,m,ck=0;
   scanf("%lld",&n);
   while(n--){
      scanf("%lld %lld",&a,&b);

        morol(a,b);
   }
}

int morol(int a, int b){
  int i,j,k,ck=0;

  while(a<=b){
     bool my = true;
    for(j=2; j<=sqrt(a); ++j){
        if(a%j==0){
            my = false;
            break;
        }
    }
    if(my==true && a!=1){
        cout<<a<<" ";
    }
    ++a;

  }

}
