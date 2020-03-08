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

/*long long int fivo(long long int a){
   if(a==0)
    return 0;
   else if(a==1)
    return 1;
   else
    return fivo(a-1) + fivo(a-2);
}

int main()
{
   long long int a, b, i, j,n,m,t,k,ck=0;
   while(scanf("%lld",&n)){
    if(n==-1) break;

    printf("%lld\n",fivo(n));
   }

}

*/

long long int f91(long long int a){

   if(a>=101) return a-10;
   else if(a<=100) return f91(f91(a+11));

}

int main(){

   long long int n,a,b,c,i,j,ck=0;

   while(cin>>n){
     if(n==0) break;
     ck = f91(n);
     printf("f91(%lld) = %lld\n",n,ck);
     n=0,ck=0;
   }
}
