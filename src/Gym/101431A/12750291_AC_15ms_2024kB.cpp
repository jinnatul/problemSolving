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
   int n,i,j,k,ck=0;
    cin >> n;
    char arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(k=1;k<=5;k++){
        for(i=0;i<n;i++){
        switch(k){

        case 1:
        if(arr[i]=='A')cout<< "***";
        if(arr[i]=='B')cout<< "***";
        if(arr[i]=='C')cout<< "***";
        if(arr[i]=='D')cout<< "***";
        if(arr[i]=='E')cout<< "***";
        break;

        case 2:
        if(arr[i]=='A')cout<< "*.*";
        if(arr[i]=='B')cout<< "*.*";
        if(arr[i]=='C')cout<< "*..";
        if(arr[i]=='D')cout<< "*.*";
        if(arr[i]=='E')cout<< "*..";
        break;

        case 3:
        if(arr[i]=='A')cout<<"***";
        if(arr[i]=='B')cout<<"***";
        if(arr[i]=='C')cout<<"*..";
        if(arr[i]=='D')cout<<"*.*";
        if(arr[i]=='E')cout<<"***";
        break;

        case 4:
        if(arr[i]=='A')cout<<"*.*";
        if(arr[i]=='B')cout<<"*.*";
        if(arr[i]=='C')cout<<"*..";
        if(arr[i]=='D')cout<<"*.*";
        if(arr[i]=='E')cout<<"*..";
        break;

        case 5:
        if(arr[i]=='A')cout<<"*.*";
        if(arr[i]=='B')cout<<"***";
        if(arr[i]=='C')cout<<"***";
        if(arr[i]=='D')cout<<"***";
        if(arr[i]=='E')cout<<"***";
        break;
    }

    }
    cout<<endl;
    }

}
