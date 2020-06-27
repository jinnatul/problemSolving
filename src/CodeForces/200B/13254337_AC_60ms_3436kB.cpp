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

    int a,b,n,i,j,ln;
    double ck=0.0,avg=0.0;

    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
        ck+=arr[i];
    }
    avg = ck/n;

    printf("%.12lf\n",avg);

}
