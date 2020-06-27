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

int main(){

   double a,t,b,c,d,j,n,i,m,aa,bb,cc,dd,ck=0;
   scanf("%lf",&n);

   while(n--){
    scanf("%lf %lf %lf %lf",&a, &b, &c, &d);

    if(a==b == c==d){
        cout<<"YES"<<endl;
    }
    else if(a==b && c==d){
        cout<<"YES"<<endl;
    }
    else if(a==c && b==d){
        cout<<"YES"<<endl;
    }
    else if(a==d && b==c){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


   }

}
