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


int main()
{
    long long int n,a,b,i,j,ck=0,t,sum=0;
    scanf("%lld",&n);
    while(n--){
         scanf("%lld",&t);
        int arr[t];
        for(i=0; i<t; i++){
             scanf("%lld",&arr[i]);
        }
        sort(arr,arr+t);
        ck = arr[t/2];
        for(i=0; i<t; i++){
            sum+=abs(ck - arr[i]);
        }
        printf("%lld\n",sum);
        sum=0;
    }

}
