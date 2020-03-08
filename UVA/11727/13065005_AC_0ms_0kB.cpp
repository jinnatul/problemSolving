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
    int t,i,a,n,b,c,sum,max,j;

    cin>>n;
    int arr[3];
    for(j=1; j<=n; j++){
    for(i=0; i<3; i++){
       cin>>arr[i];
    }
    sort(arr,arr+3);
    printf("Case %d: %d\n",j,arr[1]);

}

}