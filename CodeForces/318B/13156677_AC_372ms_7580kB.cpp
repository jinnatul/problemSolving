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

int main()
{
     int n,t,i,ln,s,g,j,k,a=0,b,c;
     long long int ck=0;
     string arr;
     cin>>arr;
     ln = arr.size();

     for(i=4; i<ln; i++){
       if(arr[i] == 'l'){
        if(arr[i-4]=='m' && arr[i-3]=='e' && arr[i-2]=='t' && arr[i-1]=='a'){
            ck+=a;
        }
       }
       else if(arr[i-4]=='h' && arr[i-3]=='e' && arr[i-2]=='a' && arr[i-1]=='v' && arr[i]=='y'){
        a++;
       }

       }

       cout<<ck<<endl;

}
