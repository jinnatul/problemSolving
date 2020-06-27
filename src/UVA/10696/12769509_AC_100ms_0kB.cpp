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


int morol(int n){

if(n<=100){

    return morol(morol(n+11));

}

else if(n>=101){

    return  n-10;

}


}

int main()

{

    long long int n,a,b,i,j,ck=0,ck1=0,ck2=0,t,sum=0;

    while(scanf("%lld",&n) && n!=0){

        ck = morol(n);

       printf("f91(%lld) = %lld\n",n,ck);

    }


}