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
#include<stack>]


using namespace std;

int arr[1000],brr[1006];

int main()
{
     int a,b,c,i,j,n,m,ck=0,k;
     scanf("%d",&n);
     for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        brr[arr[i]]++;

     }

     for(i=1; i<=1000; i++){

        if(brr[i]&&brr[i+1]&&brr[i+2]){
            cout<<"YES";
            return 0;
        }
     }
     cout<<"NO";
     return 0;

}
