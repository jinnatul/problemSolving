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

    int a,b,n,i,ck=1,dk=0,j;
    string arr,brr,crr1;

    cin>>n>>arr;

    for(i=1; i<n; i++){
    cin>>brr;

    if(arr==brr)
        ck++;
    else {
        crr1 = brr;
        dk++;
    }

    }

    if(ck>dk)
        cout<<arr<<endl;
    else
        cout<<crr1<<endl;

}
