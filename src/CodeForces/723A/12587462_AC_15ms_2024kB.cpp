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

  int a,b,c,d,e,f,g,h,ck,i,sum,my,arr[3];

  for(i=0; i<3; i++){
    cin>>arr[i];
  }
  sort(arr,arr+3);
  a = arr[2] - arr[1];
  b = arr[1] - arr[0];

  cout<<a+b<<endl;

}
