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

int main(){

    char arr[100];
    int n,i,j,a,dk=0,ln;
    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr;
        ln = strlen(arr);
        if(ln== 5){

            cout<<"3"<<endl;
        }
        else {
           dk=0;
           if(arr[0]=='o')
            dk++;
           if(arr[1]=='n')
            dk++;
           if(arr[2]=='e')
            dk++;
        if(dk>=2)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;

        }

    }

}
