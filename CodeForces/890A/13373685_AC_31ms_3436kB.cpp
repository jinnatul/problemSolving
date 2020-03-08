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

     int a,b,c,n,i,j,k,ck=0;
     int arr[6];
     for(i=0; i<6; i++){
        cin>>arr[i];
        ck+=arr[i];
     }
     for(i=0; i<6; i++){
        for(j=i+1;j<6; j++){
            for(k=j+1; k<6; k++){
                if((arr[i]+arr[j]+arr[k])*2==ck){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
     }
     cout<<"NO"<<endl;
}
