#include <bits/stdc++.h>
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
      int a,n,b,c,ln,ck=0;
      char arr[5];
      cin>>n;
      while(n--){
        cin>>arr;
        //ln = strlen(arr);
        if(arr[1]=='+'){
            ck++;
        }
        else{
            ck--;
        }
      }
      cout<<ck<<endl;


}
