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
     int n,i,j,k,ck=0,dk=0,ln=0,t;
     cin>>n;
     char arr[2000];

     while(n--){
        cin>>arr;
        ln = strlen(arr);
            if((strcmp(arr,"1")==0)||(strcmp(arr,"4")==0)||(strcmp(arr, "78")==0)){
                  cout<<"+"<<endl;
            }
            else if((arr[ln-1]=='5')&& arr[ln-2]=='3'){
                cout<<"-"<<endl;
            }
            else if(arr[0]=='9' && arr[ln-1]=='4'){
                cout<<"*"<<endl;
            }
            else if(arr[0]=='1' && arr[1]=='9' && arr[2]=='0'){
                cout<<"?"<<endl;
            }

     }
}
