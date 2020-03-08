/***
  *Jinnat Morol
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

int gcd(int a, int b){

  if(b==0) return a;
  return gcd(b, a%b);
}

int main()
{
    long int a,b,i,j,ck=0,n;

    vector<long int>my;

    long arr[1001];
    scanf("%ld",&n);

    for(i=0; i<n; i++)
        scanf("%ld",&arr[i]);

    ck=0;
    for(i=0; i<n-1; i++){
         my.push_back(arr[i]);
         if(gcd(arr[i],arr[i+1])>1){
            my.push_back(1);
            ck++;
         }
    }

    my.push_back(arr[n-1]);

    printf("%d\n",ck);

    for(i=0; i<my.size(); i++){
        printf("%ld",my[i]);
        if(i!=my.size()-1)
            cout<<" ";
    }
    cout<<endl;

}
