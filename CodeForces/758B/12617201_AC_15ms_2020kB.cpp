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

char arr[102];

int main()
{
    cin>>arr;
    int i,a,b,c,d,my[4]={0},ck[4]={0},n,res[4]={0};
    n = strlen(arr);

    for(i=0; i<n; i++){
        res[i%4]++;
        if(arr[i]=='R'){
            my[0]=i%4;
            ck[0]++;
        }
        else if(arr[i]=='B'){
            my[1]=i%4;
            ck[1]++;
        }
        else if(arr[i]=='Y'){
            my[2]=i%4;
            ck[2]++;
        }
        else if(arr[i]=='G'){
            my[3]=i%4;
            ck[3]++;
        }
    }
    for(i=0; i<4; i++){

        cout<<res[my[i]]-ck[i]<<" ";
    }

}
