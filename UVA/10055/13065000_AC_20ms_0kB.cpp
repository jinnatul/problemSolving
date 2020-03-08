#include<bits/stdc++.h>

#include<stdio.h>

#include<string.h>

#include<math.h>

#include<algorithm>

#include<vector>

 

using namespace std;

 



 

int main()

{

    long long int n,i,a,b,t,j,aa,ck=0;

      

     while(scanf("%lld %lld", &a, &b) != EOF){

  

     if(a<b){

        ck = b-a;

        printf("%lld\n", ck);

     }

     else{

        ck = (abs(a-b));

         printf("%lld\n", ck);

     }

 

    }

}